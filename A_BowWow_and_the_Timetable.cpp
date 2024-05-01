#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long sz = s.size(), cnt = 0,i;
    long long ans = (sz) / 2;
    if (sz % 2 == 0)
    {
        cout << ans << endl;
        return 0;
    }
    for ( i = 1; i < sz; i++)
    {
        if (s[i] == '1')
            cnt++;
    }
    if (cnt > 0)
        cnt = 1;
    cout << ans + cnt << endl;
}