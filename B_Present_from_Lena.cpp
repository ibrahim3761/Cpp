#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,i,m,s;
    cin>>n;
    for ( r = -n; r <= n; r++)
    {
        s=2*abs(r);
        for ( i = 0; i < s; i++)
        {
            cout<<" ";
        }
        m=n-abs(r);
        for ( i = 0; i < m; i++)
        {    
            cout<<i<<" ";
        }
        for ( i = m; i > 0; i--)
        {
            cout<<i<<" ";
        }
        cout<<0<<endl;
    }
    return 0;
}