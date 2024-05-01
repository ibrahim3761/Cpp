#include <bits/stdc++.h>
using namespace std;
#define yey cout<<"Yes"<<endl;
#define nada cout<<"No"<<endl;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int n,k;
        cin >> n >> k;
        cin >> s;
        if(n<k)
        {
            nada
            continue;
        }
        ll count =0;
        map<char,ll> mp;
        for(auto x:s)
        mp[x]++;
        for(auto[x,y]:mp)
            count += (y%2);
        count--;
        if(k<count)
        {
            nada
            continue;
        }
        yey
    }
    return 0;
}