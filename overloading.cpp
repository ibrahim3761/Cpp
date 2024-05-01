#include<iostream>
using namespace std;

class Complex 
{
    private:
        int real,imag;
    public:
    Complex()
        {
            real = 0;
            imag = 0;
        }

        Complex(int r,int i)
        {
            real = r;
            imag = i;
        }

        void print()
        {
            cout << real+imag <<endl;
        }

        Complex operator +(const Complex &c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp; 
        }
};

int main()
{
    Complex c1(5,4);
    Complex c2(2,3);
    Complex c3(1,1);
    Complex c4;
    c4=c1+c2;
    c4.print();

    return 0;
}