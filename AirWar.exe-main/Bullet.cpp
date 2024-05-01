#include "Bullet.h"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include "Enemy.h"
#include "Score.h"
#include "Game.h"

extern Game * game; // We do this if we have to use the global Game object
 // that we declared in the main file

Bullet::Bullet(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // create a bullet
    setPixmap(QPixmap(":/images/bullet2.png"));
    /*
     * we will use QTimer to achive the motion of the bullet
     * we simply set a timer, and every time that timer goes to zero
     * the signal is activated, we inturn invole the slot connected to it
    */

     QTimer * timer = new QTimer();
     connect(timer, SIGNAL(timeout()), this, SLOT(move()));
     // This connects the timeout() of the timer to the move slot

     timer->start(50); // set the timer time to 50 ms
}

void Bullet::move() {
    /* Before moving the bullet, we need to check if it is
     * colliding with an enemy, delete both bullet and enemy
    */
    QList<QGraphicsItem *> colliding_item = collidingItems();
    // This will return a list of pointers to all the colliding objects, that the
    // current member function is colliding with.

    for(int i = 0; i < colliding_item.size(); i++) {
        if(typeid(*(colliding_item[i])) == typeid(Enemy)) {
            game->score->increase();
            // Remove both the enemy & bullet
            scene()->removeItem(colliding_item[i]); // remove the enemy
            scene()->removeItem(this); // remove the bullet
            delete colliding_item[i];
            delete this;
            return ; // Because below we have code that will try to access the bullet
        }
    }
    // move the bullet up
    setPos(x(), y() - 10);

    // After the bullet cross the scene, it is still in the memory which is a waste
    if(pos().y() < 0) { // remember how the coordinate work here
        // we first remove the item from the scene & then delete it from the memory
        scene()->removeItem(this); // scene() get the refrence to the current scene
        delete this;
    }
}

