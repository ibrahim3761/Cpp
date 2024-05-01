#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,i;
        long long ans=0,j=1;
        cin >>n;
        vector<int>v(n);
        for ( i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for ( i = 0; i < n; i++)
        {
            if (v[i]>=j)
            {
                ans+=v[i]-j;
                j++;
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}