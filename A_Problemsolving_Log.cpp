#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,count=0;
        string s;
        cin >>n>>s;
        map<char,int>m;
        for (int i = 0; i < s.size(); i++)
        {
            char c= s[i];
            m[c]++;
        }
        for (auto it=m.begin();it!=m.end();++it)
        {
            if(it->second>=(it->first-'A'+1))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}