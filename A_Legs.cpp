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
    cint 
    while (t--)
    {
        int n;
        cin>>n;

        int ma=n/4; 
        if (n%4!=0) 
        {        
            ma++;       
        }

        cout<<ma<<endl;
    }
    return 0;
}
