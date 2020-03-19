#include "base.h"
#include <QDebug>
int main(){
    testBase x;
    x.fill();
    qDebug()<<x.sum();
    qDebug()<<x.min();
    qDebug()<<x.max();
}