#include <QList>
class testBase{
private:
    QList<int> testList;
public:
    void fill();
    int max();
    int min();
    int sum();
    testBase();
};