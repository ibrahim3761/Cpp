#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

/*
// * For any class to support signals and slots :
// * 1. We have to inherit it from QObject
// * 2. Define a macro, Q_OBJECT, at the start of class.
//*/

class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent=0);
public slots:
    void move();
};

#endif // ENEMY_H
