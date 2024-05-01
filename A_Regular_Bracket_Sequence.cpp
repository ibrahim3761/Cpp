#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        string str; cin >> str;
        
        if (str.length() % 2 == 0 && str[0] != ')' && str.back() != '(') 
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}