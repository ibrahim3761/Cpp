#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,f=1,i;
    cin >> s>>n;
    vector<pair<int, int>>v;
    for(i=0;i<n;i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(),v.end());
    for ( i = 0; i < n; i++)
    {
        if (s>v[i].first)
        {
            s+=v[i].second;
        }
        else
        {
            f=0;
            break;
        }
    }
    if (f==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}