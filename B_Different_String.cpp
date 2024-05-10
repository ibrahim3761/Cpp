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
        int i, f = 0;
        string s, s1;
        cin >> s;
        for (i=0;i<s.size()-1;i++)
        {
            if (s[i]!=s[i+1])
            {
                swap(s[i],s[i+1]);
                f= 1;
            }
        }
            if (f == 1)
            {
                yes

                cout<< s << endl;
            }
            else
            {
                no
            }
        }
        return 0;
}

