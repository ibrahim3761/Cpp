#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int max_dist = max(a[0], 2 * (x - a[n - 1]));
        for (int i = 1; i < n; i++)
        {
            max_dist = max(max_dist, a[i] - a[i - 1]);
        }
        cout << max_dist << endl;
    }
    return 0;
}
