#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i;
    cin >>n>>q;
    vector <int>p(n);
    for ( i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    sort(p.rbegin(),p.rend());
    long long pref[n+1];
    pref[0]=p[0];
    for ( i = 1; i < n; i++)
    {
        pref[i]=pref[i-1]+p[i];
    }

    while (q--)
    {
        int x,y,r,l;
        long long sum=0;
        cin  >>x>>y;
        r=x-1;
        l=r-y;
        if (x==y)
        {
            sum=pref[x-1];
        }
        else{
        sum=pref[r]-pref[l];
        }
        cout<<sum<<endl;
    }
    return 0;
}