#include "Enemy.h"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include <stdlib.h>
#include "Game.h"

extern Game * game;
Enemy::Enemy(QGraphicsItem* parent) :QObject(), QGraphicsPixmapItem(parent) {
    // set random spwan pos for enemies
    int random = rand() % 700;
    setPos(random, 0);
    // create a Enemy
    setPixmap(QPixmap(":/images/enemy2.png"));
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

void Enemy::move() {
    // move the enemy down
    setPos(x(), y() + 5);

    // After the bullet cross the scene, it is still in the memory which is a waste
    if(pos().y() + 100 > 600) { // remember how the coordinate work here
        // decrease the health
        game->health->decrease();
        // we first remove the item from the scene & then delete it from the memory
        scene()->removeItem(this); // scene() get the refrence to the current scene
        delete this;
    }
}
