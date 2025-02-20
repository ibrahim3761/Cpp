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
        string s, s1, s2;
        cin >> s;
        int i, f = 0;

       
        for (i = 1; i < s.size(); ++i)
        {
            s1 = s.substr(0, i); 
            s2 = s.substr(i);    

            
            if (s2[0] != '0' && stoi(s1) < stoi(s2))
            {
                cout << s1 << " " << s2 << endl;
                f = 1;
                break;
            }
        }

        if (f==0)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
