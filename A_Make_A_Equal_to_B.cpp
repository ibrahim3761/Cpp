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
        int n, sum = 0, x;
        cin >> n;
        vector <int> a(n);
        vector <int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum -= b[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (a[i] ^ b[i]);
        }
        ans = min(ans, abs(sum) + 1);
        cout << ans << endl;
    }
    return 0;
}
