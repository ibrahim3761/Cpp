#include <iostream>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;

int main()
{
    int t = 1;
    cint
    while (t--)
    {
       int a,b,count=0;
       cin>>a>>b;
       if (a%b==0)
       {
            cout<<"0"<<endl;
       }
       else
       {
            cout<<b-a%b<<endl;
       }
    }
    return 0;
}
