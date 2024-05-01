#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,s1="";
    cin >>s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s1.empty()||s1.back()!=s[i])
        {
            s1+=s[i];
        }
        else
        {
            s1.pop_back();
        }  
    }
    cout << s1 << endl;
}