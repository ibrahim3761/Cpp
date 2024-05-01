#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1="hello";
    int i,j,f=0;
    for ( i = 0,j=0; i < s.size()&&j<s1.size(); i++)
    {
        if (s1[j]==s[i])
        {
            j++;
            if (j==s1.size())
            {
                f=1;
            }
        }
    }
    if (f==1)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
    return 0;
}