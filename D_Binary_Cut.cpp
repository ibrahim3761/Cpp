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
    cint while (t--)
    {
        int i,ans=0;
        string s,s1;
        cin >> s;
        s1 = s;
        if (is_sorted(s.begin(), s.end()))
        {
            cout << "1" << endl;
        }
        else
        {
            for (i = 0; i < s.size()-1; i++)
            {
                ans +=s[i]^s[i+1];
            }
            if (ans==1)
            {
                cout<<ans+1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
