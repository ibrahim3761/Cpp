#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

/*
 * For any class to support signals and slots :
 * 1. We have to inherit it from QObject
 * 2. Define a macro, Q_OBJECT, at the start of class.
*/

class Bullet: public QObject,public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Bullet(QGraphicsItem * parent=0);
public slots:
    void move();
};

#endif // BULLET_H
