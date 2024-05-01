#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,uni=0;
    cin >>n;
    vector<pair<string,string>>v(n);
    for ( i = 0; i < n; i++)
    {
        cin >>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    uni=unique(v.begin(),v.end())-v.begin();
    cout<<uni<<endl;
    return 0;
}