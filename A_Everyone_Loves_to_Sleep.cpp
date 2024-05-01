#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {

        int n, h, m, x, a;
        cin >> n >> h >> m;
        x = h * 60 + m;
        a = 1510;
        for (int i = 0; i < n; i++)
        {
            cin >> h >> m;
            int p = h * 60 + m;
            if (p < x)
            {
                p += (24 * 60);
            }
            a = min(a, p - x);
        }
        cout << a / 60 << " " << a % 60 << endl;
    }
    return 0;
}