/*#include <bits/stdc++.h>2
using namespace std;
class Facebook {
public:
    string user_name, full_name, about, institution, lives_in;
    int friends;
private:
    string password, email, phone, gender;
    int birth_year;
public:
    void getUserData() {
        cin >> user_name;
        cin.ignore();
        getline(cin, full_name);
        cin >> friends;
        cin.ignore();
        getline(cin, about);
        getline(cin, institution);
        getline(cin, lives_in);
        cin >> password;
        cin >> email;
        cin >> phone;
        cin >> gender;
        cin >> birth_year;
    }
    void showUserData() {
        cout << "User name: " << user_name << endl;
        cout << "Full name: " << full_name << endl;
        cout << "Friends: " << friends << endl;
        cout << "About: " << about << endl;
        cout << "Institution: " << institution << endl;
        cout << "Lives in: " << lives_in << endl;
    }
};
int main() {
    Facebook user;
    user.getUserData();
    user.showUserData();
    return 0;
}

//4
#include <bits/stdc++.h>
using namespace std;
class Facebook {
public:
    string user_name,full_name,about,institution,lives_in;
    int friends;
private:
    string password,email,phone,gender;
    int birth_year;
public:
    void getUserData();
    void showUserData();
};
void Facebook::getUserData() {
    cin >> user_name;
    cin.ignore();
    getline(cin, full_name);
    cin >> friends;
    cin.ignore();
    getline(cin, about);
    getline(cin, institution);
    getline(cin, lives_in);
    cin >> password;
    cin >> email;
    cin >> phone;
    cin >> gender;
    cin >> birth_year;
}
void Facebook::showUserData() {
    cout << "User name: " << user_name << endl;
    cout << "Full name: " << full_name << endl;
    cout << "Friends: " << friends << endl;
    cout << "About: " << about << endl;
    cout << "Institution: " << institution << endl;
    cout << "Lives in: " << lives_in << endl;
}
int main() {
    Facebook user;
    user.getUserData();
    user.showUserData();
    return 0;
}

//5
#include <bits/stdc++.h>
using namespace std;
class Student {
public:
    string name,id,section;
    void showDetails();
};
void Student::showDetails() {
    cout << name << endl;
    cout << id << endl;
    cout << section << endl;
}
int main() {
    Student student;
    student.name = "Mohammad Ibrahim Abdullah";
    student.id = "C231183";
    student.section = "2EM";
    student.showDetails();
    return 0;
}

//1
#include <bits/stdc++.h>
using namespace std;
class CalculateAreaOfRectangle
{

private:
    double l,w;
public:
    void getValue(double length, double width)
    {
        l = length;
        w = width;
    }
    void showArea()
    {
        double a = l * w;
        cout << a << endl;
    }
};
int main()
{
    CalculateAreaOfRectangle details;
    double l, w;
    cin >> l >> w;
    details.getValue(l, w);
    details.showArea();
}
//2.
#include <bits/stdc++.h>
using namespace std;

class CalculateAreaOfRectangle
{
private:

    double l,w;
public:
    void getValue(double length, double width);
    void showArea();
};
void CalculateAreaOfRectangle :: getValue(double length, double width)
{
    l = length;
    w = width;
}
void CalculateAreaOfRectangle :: showArea()
{
    double a = l * w;
    cout << a << endl;
}
int main()
{
    CalculateAreaOfRectangle details;
    double l, w;
    cin >> l >> w;
    details.getValue(l, w);
    details.showArea();
}

//7.
#include <bits/stdc++.h>
using namespace std;
class Customer
{
public:
    string customer_name,customer_id,customer_amount;
    Customer(string name, string id, string amount)
    {
        customer_name = name;
        customer_id = id;
        customer_amount = amount;
    }
    ~Customer()
    {
        cout << "GOODBYE" << endl;
    }
    void details();
};
void Customer :: details()
{
    cout << customer_name << endl;
    cout  << customer_id << endl;
    cout << customer_amount << endl;
}
int main()
{
    string name, id, amount;
    getline(cin, name);
    cin >> id;
    cin >> amount;
    Customer detail(name, id, amount);
    detail.details();

}
//6.
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name, id, section;
    int marks[10];
    void in();
    void friend out(student details);
};
void student :: in()
{
    getline(cin, name);
    cin >> id;
    cin >> section;
    for (int i = 0; i < 10; i++)
    {
        cin >> marks[i];
    }
    getchar();
}
void out(student details)
{
    cout << details.name << endl;
    cout << details.id << endl;
    cout << details.section << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << details.marks[i] << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    getchar();
    student details[n];
    for (int i = 0; i < n; i++)
    {
        details[i].in();
        out(details[i]);
    }
}

//function overoading
#include <iostream>
#include <string>
using namespace std;

int addScores(int score1, int score2) {
    return score1 + score2;
}
int addScores(int score1, int score2, int score3) {
    return score1 + score2 + score3;
}

int main() {
    string player1 = "Messi",player2 = "Ronaldo",player3 = "Neymar";

    int score1 = 2,score2 = 3,score3 = 1;

    int result1 = addScores(score1, score2);
    int result2 = addScores(score1, score2, score3);

    cout << "Total goals scored by " << player1 << " and " << player2 << ": " << result1 << endl;
    cout << "Total goals scored by " << player1 << ", " << player2 << ", and " << player3 << ": " << result2 << endl;

    return 0;
}
//constructor over loading
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width,height;

public:

    Rectangle()
    {
        width = 0,height=0;
    }

    Rectangle(int side)
    {
        width = side;
        height = side;
    }

    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    int calcArea()
    {
        return width*height;
    }
};

int main()
{
    Rectangle square(5);
    Rectangle rect(4, 6);

    cout << "Square Area: " << square.calcArea() << endl;
    cout << "Rectangle Area: " << rect.calcArea() <<endl;

    return 0;
}*/
/*
//1
#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name,id;
    void getinput();
    void getoutput();
};

void student :: getinput()
{
    cin>>name>>id;
}

void student :: getoutput()
{
    cout<<name<<endl<<id<<endl;
}
int main()
{
    student obj;
    obj.getinput();
    obj.getoutput();
}
//2
#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name,id;
    void getinput()
    {
         cin>>name>>id;
    }
    void getoutput();

};

void student :: getoutput()
{
    cout<<name<<endl<<id<<endl;
}
int main()
{
    student obj;
    obj.getinput();
    obj.getoutput();
}*/
//3
#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name,id;
    void getinput()
    {
         cin>>name>>id;
    }
    friend void getoutput();


};

void  getoutput(student obj)
{
    cout<<obj.name<<endl<<obj.id<<endl;
}
int main()
{
    student obj;
    obj.getinput();
    getoutput(obj);
}
/*
//4
#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name,id;
    friend void getinput();

    void getoutput();


};
void getinput(student &obj)
{
    cin>>obj.name>>obj.id;
}

void student:: getoutput()
{
    cout<<name<<endl<<id<<endl;
}
int main()
{
    student obj;
    getinput(obj);
    obj.getoutput();
}
*/
