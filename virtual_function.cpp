#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base=1;
        virtual void display()
        {
            cout<<"1displaying Base Class Variable bas:"<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived=2;
        void display()
        {
            cout <<"2Displaying Base Class Variable bas :"<<var_base<<endl;
            cout <<"2Displaying derive Class Variable der :"<<var_derived<<endl; 
        }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derive;

    base_class_pointer = &obj_derive;
    base_class_pointer->display();
    return 0;
}