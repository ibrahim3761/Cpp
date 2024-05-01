#include<iostream>
using namespace std;

//base class
class Employee
{
    public:
        int id;
        float salary;
        Employee(int inpid)
        {
            id=inpid;
            salary=34.0;
        }
        Employee(){}
};

// derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/mthods/etc...
}
Note:
1.Default visiblity mode private
2.Public visiblity mode: Public members of the base class becomes public members of derived class
3.Privat visiblity mode: Public members of the base class becomes private members of derives class
4.Privae mebers are never inherited.
*/

//creating a programmer class derived from employee Base class
class Programmer : public Employee
{
    public:
    int languageCode;
    Programmer(int inpid)
    {
        id =  inpid;
        languageCode=9;
    } 
    void getData()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary<<endl;
    cout << rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
}