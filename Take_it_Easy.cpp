#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,i,sum=0,f=1;
        cin >> n;
        vector<int> v(n);
        for(i=0; i<n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        if(sum%n!=0) cout<<"No"<<endl;
        else
        {
            ll rem = sum/n;
            for(i=0; i<n; i++)
            {
                ll a= v[i] - rem;
                if(a%2!=0)
                {
                    cout<<"No"<<endl;
                    f=0;
                    break;
                }
            }
            if(f) cout<<"Yes"<<endl;
        }
    }
    return 0;
}