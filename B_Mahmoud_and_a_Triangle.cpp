#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,f=1;
    cin>>n;
    vector<int>v(n);
    for ( i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for ( i = 0; i < n-2; i++)
    {
        if (v[i]+v[i+1]>v[i+2])
        {
            f=0;
            break;
        }
    }
    if (f==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}