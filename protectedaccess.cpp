#include<iostream>
using namespace std;

class Base
{
    protected:
        int a;
    private:
        int b;
};
/*
For a protected member:
                         Public derivation  Private derivation   Protected derivation   
    1.Private members       Not inherited    NOt inherited         Not inherited     
    2.Protected members     Protected        Private               Protected  
    3.Public membbers       Public           Private               Protected
*/

class Derived : protected Base
{
     
};

int main()
{
    Base b;
    Derived d;
    cout<<d.a<<endl; //will not  work since a is protected in both base as well as derived 
    return 0;
}