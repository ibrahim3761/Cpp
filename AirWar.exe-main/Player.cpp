#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // set graphic
    setPixmap(QPixmap(":/images/plane2.png"));
}

void Player::keyPressEvent(QKeyEvent *event){
        // The info about the keyPress is stored in the even object
        if((event->key() == Qt::Key_Left || event->key() == Qt::Key_A) && pos().x() > 0) {
            // set the new position of the object
            setPos(x() - 10, y());
        }
        else if((event->key() == Qt::Key_Right || event->key() == Qt::Key_D) && pos().x() + 100 < 800) {
            setPos(x() + 10, y());
        }
        else if((event->key() == Qt::Key_Up || event->key() == Qt::Key_W) && pos().y() > 0) {
            setPos(x(), y() - 10);
            // we do -10, since the axis starts form the top left corner.
        }
        else if((event->key() == Qt::Key_Down || event->key() == Qt::Key_S) && pos().y() + 100 < 600) {
            setPos(x(), y() + 10);
        }
        else if(event->key() == Qt::Key_Space) {
            Bullet * bullet = new Bullet();
            bullet->setPos(x(), y());
            // Every QGraphicsItem object have an pointer to the scene in which it is.
            /* scene(); // will return a member function to the scene this item is in */
            scene()->addItem(bullet);
        }
}

void Player::spawn(){
    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
