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
        ll n, i,x,k,msum=0,ox=0;
        cin>>n;
        for ( x = 2; x <=n; x++)
        {
            k=n/x;
            ll sum= x*((k*(k+1))/2);
            if (sum>msum)
            {
                msum=sum;
                ox=x;
            }
        }
        cout<<ox<<endl;
    }
    return 0;
}
