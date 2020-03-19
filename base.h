#include <QList>
class testBase{
private:
    QList<int>testList;
public:
    QList<int> fill();
    int max();
    int min();
    int sum();
    testBase();
};