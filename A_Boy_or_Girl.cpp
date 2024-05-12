#include <bits/stdc++.h>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;

int main()
{
    int t = 1;
    /*cint*/ while (t--)
    {
        int i,ans=0;
        string s,s1;
        cin >> s;
        sort(s.begin(),s.end());
        for ( i = 0; i < s.size(); i++)
        {
            if (i==0)
            {
                s1 += s[i];
            }
            else if (s[i]==s[i-1])
            {
                continue;
            }
            else
            {
                s1 += s[i];
            }
        }
        //cout<<s1<<endl;
        if (s1.size()%2!=0)
        {
            cout<<"IGNORE HIM!"<<endl;
        }
        else
        {
            cout<<"CHAT WITH HER!"<<endl;
        }
        return 0;
    }
    return 0;
}
