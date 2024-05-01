#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << roll_number << endl;
}

class Exam: public Student
{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam:: set_marks(float m1, float m2)
{
    maths=m1;
    physics=m2;
}

void Exam:: get_marks()
{
    cout<<"Maths:"<<maths<<endl;
    cout<<"Physics:"<<physics<<endl;
}

class Result : public Exam
{
    float percentage;
    public:
        void display_results()
        {
            get_roll_number();
            get_marks(); 
            cout<<"Percentage:"<<(maths+physics)/2<<"%"<<endl;
        }
};

int main()
{
    /*
    Notes:
        If we are inheriting B from A and C from B:[A-->B-->C]
        1.A I base for B and B is base for C
        2.ABC is called inheritance path
    */
    Result harry;
    harry.set_roll_number(400);
    harry.set_marks(94.0,90.0);
    harry.display_results();
    return 0;
}