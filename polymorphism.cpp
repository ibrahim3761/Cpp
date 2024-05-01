#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base;
        void display()
        {
            cout<<"displaying Base Class Variable bas:"<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived;
        void display()
        {
            cout <<"Displaying Base Class Variable bas :"<<var_base<<endl;
            cout <<"Displaying derive Class Variable der :"<<var_derived<<endl; 
        }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derive;

    base_class_pointer=&obj_derive;
    base_class_pointer->var_base=34;
    base_class_pointer->display();

    DerivedClass * derive_class_pointer;
    
    derive_class_pointer = &obj_derive;
    derive_class_pointer->var_derived=98;
    derive_class_pointer->display();
    
    return 0;
;}