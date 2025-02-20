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
        string s;
		cin >> s;
		int i,ans = 1;
		if(s[0] == '0')
        { 
            ans = 0;
        }
		if(s[0] == '?') 
        {
            ans = 9;
        }
		for( i = 1; i < s.size(); i++)
        {
			if(s[i] == '?')
            {
				ans *= 10;
            }
        }
		cout << ans << endl;
    }
    return 0;
}
