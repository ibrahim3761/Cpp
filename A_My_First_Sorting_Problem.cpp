#include <bits/stdc++.h>
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
    cint while (t--)
    {
        int x,y;
        cin>> x>>y;
        if (x==y)
        {
            cout<<x<< " "<<y<<endl;
        }
        
        else if (x>y)
        {
            cout<<y<<" "<<x<<endl;
        }
        else
        {
            cout<<x<< " "<<y<<endl;
        }
        
    }
    return 0;
}
