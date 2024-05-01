#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n= stoi(s),f=1,i;
     for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '4' && s[i] != '7' && n % 4 != 0 && n % 7 != 0 && n % 47 != 0)
        {
            f = 0;
            break;
        }
    }
    if (f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}