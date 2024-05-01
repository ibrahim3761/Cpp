#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
    public:
        void show()
        {
            cout<<"The vlue of Base1 is: "<<base1int<<endl;
            cout<<"The vlue of Base2 is: "<<base2int<<endl;
            cout<<"Sum is: "<<base1int+base2int<<endl;
        }
};
/*
The inherited Derived class will look something like this:
Data members:
    base1int-->protected
    base2int-->protected
Members fuction:
    set_base1int()-->public
    set_base2int(_)-->public
    set_show()-->public
*/

int main()
{
    Derived harry;
    harry.set_base1int(23);
    harry.set_base2int(5);
    harry.show();
    return 0;
}