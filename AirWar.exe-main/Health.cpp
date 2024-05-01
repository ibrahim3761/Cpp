#include "Health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent){
    health = 5;

    // Draw the text
    setPlainText(QString("Health : ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Health::decrease() {
   health--;
   setPlainText(QString("Health : ") + QString::number(health));
   if(health==0){
       return;
   }

}

int Health::getHealth() {
    return health;
}

