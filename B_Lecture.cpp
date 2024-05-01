#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    map<string,string>mp;
    for ( i = 0; i < m; i++)
    {
        string x,y;
        cin>>x>>y;
        if (x.size()<=y.size())
        {
            mp[x]=x;
        }
        else
        {
            mp[x]=y;
        }
    }
    for ( i = 0; i < n; i++)
    {
        string a;
        cin>>a;
        cout<<mp[a]<<" ";
    }
    cout<<endl;
    return 0;
}