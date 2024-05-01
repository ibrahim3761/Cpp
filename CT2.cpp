                                                /*1
#include<bits/stdc++.h>
using namespace std;
class operatr
{
    int x;
    public:
    operatr(int x=0) : x{x} {}

    operatr add(const operatr& r)
    {
        operatr s;
        s.x=x+r.x;  
        return s;
    }
    void print()
    {
        cout << x << endl;
    }
};

int main()
{
    int a,b;
    cin>>a>>b;
    operatr s1(a), s2(b);
    operatr s3 = s1. add(s2);
    s3.print();
    return 0;
}

                                                    2
#include<bits/stdc++.h>
using namespace std;
class operatr
{
    int x;
    public:
    operatr(int x = 0) : x{x} {}
    operatr add(const operatr& r)
    {    
        operatr s;
        s.x=x+r.x;
        return s;
    }
    void print()
    {
        cout<<x<<endl;
    }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    operatr s1(a),s2(b),s3(c);
    operatr s4=s1.add(s2.add(s3));
    s4. print();
    return 0;
}
                                                3
#include <bits/stdc++.h>
using namespace std;
class operatr
{
    int x;
    public:
    operatr(int x = 0) : x{x} {}
    operatr operator+(const operatr &op);
    void show();
};
operatr operatr :: operator+(const operatr &r)
{
    operatr s;
    s.x = x + r.x;
    return s;
}
void operatr :: show()
{
    cout << x << endl;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    operatr s1(a), s2(b), s3(c);
    operatr s4 = s1 + s2 + s3;
    s4.show();
    return 0;
}
                                            4
#include <bits/stdc++.h>
using namespace std;
class operatr
{
    int x;
    public:
    operatr(int x = 0) : x{x} {}
    void show();
    friend operatr operator+(const operatr &op1, const operatr &op2);
};
operatr operator+(const operatr &op1, const operatr &op2)
{
    operatr r;
    r.x = op1.x + op2.x;
    return r;
}
void operatr::show()
{
    cout << x << endl;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    operatr s1(a), s2(b), s3(c);
    operatr s4 = s1 + s2 + s3;
    s4.show();
    return 0;
}
                                            5
#include <bits/stdc++.h>
using namespace std;
class Time {
private:
    int h,m,s;
public:
    Time(int h = 0, int m = 0, int s = 0) : h(h), m(m), s(s) {}
    bool operator==(const Time &afk) const 
    {
        return h == afk.h && m == afk.m && s == afk.s;
    }

    bool operator<(const Time &afk) const 
    {
        if (h < afk.h)
        {
            return true;
        }
        else if (h == afk.h) 
        {
            if (m < afk.m)
            {
                return true;
            }
            else if (m == afk.m)
            {
                return s < afk.s;
            }
        }
        return false;
    }

    bool operator>(const Time &afk) const 
    {
        if (h > afk.h)
        {
            return true;
        }
        else if (h == afk.h) 
        {
            if (m > afk.m)
            {
                return true;
            }
            else if (m == afk.m)
            {
                return s > afk.s;
            }
        }
        return false;
    }
};

int main() {
    Time time1(12, 39, 40);
    Time time2(7, 40, 39);

    if (time1 == time2)
    {
        cout << "Time 1 is equal to Time 2" << endl;
    }
    else
    {
        cout << "Time 1 is not equal to Time 2" << endl;
    }
    if (time1 < time2)
    {
        cout << "Time 1 is less than Time 2" << endl;
    }
    else
    {
        cout << "Time 1 is not less than Time 2" << endl;
    }
    if (time1 > time2)
    {
        cout << "Time 1 is greater than Time 2" << endl;
    }
    else
    {
        cout << "Time 1 is not greater than Time 2" << endl;
    }
    return 0;
}
                                                7
#include <bits/stdc++.h>
using namespace std;
class Uni
{
public:
    string name;
    int id;
    string dept;
};

class Stu : public Uni
{
public:
    int semester;
    char section;
};

class Teach : public Uni
{
public:
    int total_credit;
};

class faculty : public Uni
{
public:
    string lab;
};

int main()
{

    Stu student1;
    student1.name = "Mohammad  Ibrahim Abdullah";
    student1.id = 231183 ;
    student1.dept = "Computer Science";
    student1.semester = 2;
    student1.section = 'E';
    Teach teacher1;
    teacher1.name = "Md. Shahariar Younus Ashik";
    teacher1.id = 1279;
    teacher1.dept = "CSE";
    teacher1.total_credit = 40;
    faculty faculty1;
    faculty1.name = "Saiful Kabir";
    faculty1.id = 1123;
    faculty1.dept = "Chemistry";
    faculty1.lab = "Chemistry Lab 101";

    cout << "\n----------- Student Info: -----------\n";
    cout << "Name: " << student1.name << "\n";
    cout << "ID: " << student1.id << "\n";
    cout << "Department: " << student1.dept << "\n";
    cout << "Semester: " << student1.semester << "\n";
    cout << "Section: " << student1.section << "\n";

    cout << "\n----------- Teacher Info: ------------\n";
    cout << "Name: " << teacher1.name << "\n";
    cout << "ID: " << teacher1.id << "\n";
    cout << "Department: " << teacher1.dept << "\n";
    cout << "Total Credit: " << teacher1.total_credit << "\n";

    cout << "\n------------- faculty Info: ------------\n";
    cout << "Name: " <<faculty1.name << "\n";
    cout << "ID: " << faculty1.id << "\n";
    cout << "Department: " << faculty1.dept << "\n";
    cout << "Lab: " << faculty1.lab << "\n";

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
class University
{
protected:
    string uname;
    string uaddress;
    int num_of_depts;
    int num_of_faculties;

public:
    void in1()
    {
        uname = "IIUC";
        uaddress = "Kumira";
        num_of_depts = 7;
        num_of_faculties = 3;
    }
};

class Faculties : public University
{
protected:
    string fname;
    int num_of_depts_in_faculty;

public:
    void in2()
    {
        fname = "FSE";
        num_of_depts_in_faculty = 4;
    }
};

class Departments : public Faculties
{
protected:
    string dname;
    int total_students;
    int total_semesters;

public:
    void in3()
    {
        dname = "CSE";
        total_students = 1500;
        total_semesters = 8;
    }

    void out()
    {
        in1();
        in2();
        cout << "University: " << uname << endl;
        cout << "Address: " << uaddress << endl;
        cout << "Number of Departments: " << num_of_depts << endl;
        cout << "Number of Faculties: " << num_of_faculties << endl;
        cout << "Faculty: " << fname << endl;
        cout << "Number of Departments in Faculty: " << num_of_depts_in_faculty << endl;
        cout << "Department: " << dname << endl;
        cout << "Total Students: " << total_students << endl;
        cout << "Total Semesters: " << total_semesters << endl;
    }
};
int main()
{
    Departments department;
    department.in1();
    department.in2();
    department.in3();
    department.out();

    return 0;
}