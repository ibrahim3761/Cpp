#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,i,a=1,b;
        cin >>n;
        for ( i = 2; i*i <= n; i++)
        {
            if (n%i==0)
            {
                a=n/i;
                break;
            }
        }
        cout<<a<<" "<<n-a<<endl;
    }
    return 0;
}