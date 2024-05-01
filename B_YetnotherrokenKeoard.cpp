#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int i;
        string s;
        cin >>s;
        vector<int>cap,sml;
        for ( i = 0; i < s.size(); i++)
        {
            if (s[i]>='A' && s[i]<='Z' && s[i]!='B')
            {
                cap.push_back(i);
            }
            if (s[i]>='a' && s[i]<='z' && s[i]!='b')
            {
                sml.push_back(i);
            }
            if (s[i]=='B' && !cap.empty())
            {
                s[cap.back()]='9';
                cap.pop_back();
            }
            if (s[i]=='b' && !sml.empty())
            {
                s[sml.back()]='9';
                sml.pop_back();
            }
        }
        for ( i = 0; i < s.size(); i++)
        {
            if (s[i]!='b' && s[i]!='B'&& s[i]!='9')
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}