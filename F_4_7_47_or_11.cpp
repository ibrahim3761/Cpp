// operator overloading

#include <bits/stdc++.h>

using namespace std;

class A
{
	public:
	int a, b;
	void getValue(int c, int d)
	{
		a = c;
		b = d;
	}
	A operator--(int);
};


A A :: operator--(int)
	{
		A res;
		res.a = a - 1;
		res.b = b - 1;
		return res;
	}


int main()
{
    A obj1;
    obj1.getValue(10, 20);
    A ans = obj1--; // obj1.add()
    cout << ans.a << " " << ans.b << endl; 
	return 0;
}