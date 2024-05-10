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
        int a,b,c,d,i;
        cin >> a >> b >> c >> d;
        int f1=0,f2=0;
        int temp=max(a,b);
        a=min(a,b);
        b=temp;
        for ( i =a; i <= b; i++)
        {
            if (i==c)
            {
                f1=1;
            }
            if (i==d)
            {
                f2=1;
            }
        }
        if ((f1==1 &&f2==1) || (f1==0 &&f2==0))
        {
            no
        }
        else
        {
            yes
        }
                
    }
    return 0;
}
