#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n,i;
        cin >> n;

        string s;
        cin >> s;

        ll cnt = 0;
        bool yes = false;

        for ( i = 0; i < n; i++)
        {
            if (s[i] == '.')
                cnt++;
            if (i <= n - 3 && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                yes = true;
            }
        }

        if (yes)
            cout << "2"<<endl;
        else
            cout << cnt <<endl;
    }

    return 0;
}