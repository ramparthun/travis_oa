#include "base.h"

QList<int> testBase::fill() {
    QList<int>assist;
    for(int i=0;i<10;i++){
        assist.push_back(i);
    }
}

int testBase::max() {
    return testList.last();
}

int testBase::min() {
    return  testList.first();
}

int testBase::sum() {
    int assist=0;
    for(int i=0;i<testList.length();i++){
        assist+=testList[i];
    }
    return assist;
}

testBase::testBase() {

}
