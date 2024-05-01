#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    cin >> s;
    int i, f = 0,f1=0;
    for (i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            f++;
        }
    }
    for ( i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            f1++;
        }
    }
    
    if (islower(s[0]) && f == 0)
    {
        s[0]= toupper(s[0]);
        for (i = 1; i < s.size(); i++)
        {
            s[i]= tolower(s[i]);
        }
        cout << s << endl;
    }
    else if(f1==s.size())
    {
        for ( i = 0; i <s.size() ; i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
   
    return 0;
}