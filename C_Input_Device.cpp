#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,in;
    char c;
    string s,s1="qwertyuiopasdfghjkl;zxcvbnm,./",s2;
    cin >> c;
    cin >> s;
    for ( i = 0; i <s.size(); i++)
    {
        in=s1.find(s[i]);
        if (c=='R')
        {
            s2+=s1[in-1];
        }
        else
        {
            s2+=s1[in+1];
        }
    }
    cout<<s2<<endl;
    return 0;
}