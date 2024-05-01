#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int barca = 5;
    virtual void print()
    {
        cout << "1. La masia: " << barca << endl;
    }
};
class derived : public base
{
public:
    int madrid = 0;
    void print()
    {
        cout << "2. La masia: " << barca << endl;
        cout << "2. Los blancos: " << madrid << endl;
    }
};
int main()
{
    base bs;
    derived der;

    base *obj1;
    obj1 = &der;
    obj1->print();

    return 0;
}