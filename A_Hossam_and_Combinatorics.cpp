#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,i,l=0,r=0;
        cin >>n;
        vector<long long>v(n);
        for ( i = 0; i <n; i++)
        {
            cin >>v[i];
        }
        sort(v.begin(),v.end());
        for ( i = 0; i < n; i++)
        {
            if (v[i]==v[0])
            {
                l++;
            }
            if (v[i]==v.back())
            {
                r++;
            }
        }
        if (l==n)
        {
            cout<<n*n-n<<endl;
        }
        else
        {
            cout <<2*l*r<<endl;
        }
    }
    return 0;
}