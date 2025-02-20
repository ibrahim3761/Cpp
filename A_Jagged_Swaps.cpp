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
        vector<int> v(n);

        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
