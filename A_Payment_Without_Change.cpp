#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, S;
        cin >> a >> b >> n >> S;

        int minn = min(S / n, a);
        if (minn * n + b >= S)
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
