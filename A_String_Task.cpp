#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char>v;
    for ( int i = 0; i < s.size(); i++)
    {
        if(tolower(s[i])!='a'&&tolower(s[i])!='e'&&tolower(s[i])!='i'&&tolower(s[i])!='o'&&tolower(s[i])!='u'&&tolower(s[i])!='y'){
            v.push_back('.');
            v.push_back(tolower(s[i]));
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout << v[i];
    }
    cout<<endl;
    return 0;
}