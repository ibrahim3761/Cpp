#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        string s;
        cin >>s;
        n=s.size();
        if (s[0]==s[n-1])
        {
            cout <<s<<endl;
        }
        else
        {
            s[0]=s[n-1];
            cout << s<<endl;
        }
    }
    return 0;
}
