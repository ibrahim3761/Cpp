#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >>t;
    while (t--)
    {
        long long n,x,i,sum=0,sum1=0;
        cin >> n>>x;
        vector <long long>v(n);
        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=((v[i]+x-1)/ x);
            sum1+=v[i];
        }
        cout<<(sum1+(x-1))/x<<" "<<sum<<endl;
    }
    return 0;
}