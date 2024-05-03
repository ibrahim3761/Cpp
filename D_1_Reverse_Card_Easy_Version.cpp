
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2000005;
int tc, n, m;
ll ans;
inline void solve()
{
    cin >> n >> m;
    ans = 0;
    for (int i = 1; i <= m; i++)
        ans += (n + i) / (1ll * i * i);
    cout << ans - 1 << '\n';
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}