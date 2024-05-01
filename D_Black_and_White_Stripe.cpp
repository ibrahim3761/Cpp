#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, countw = 0, countb = 0, minw = INT_MAX;      BB WBW     B=2,W=2
        cin >> n >> k;
        string s;
        cin >> s;
        for (i = 0; i < k; i++)
        {
            if (s[i] == 'B')
            {
                countb++;
            }
            else if (s[i] == 'W')
            {
                countw++;
            }
        }
        if (countb == k)
        {
            minw = 0;
        }
        else
        {
            minw = countw;
        }
        for (i = 1; i <= n - k; i++)
        {
            if (s[i - 1] == 'B')
            {
                countb--;
            }
            else if (s[i - 1] == 'W')
            {
                countw--;
            }
            if (s[i + k - 1] == 'B')
            {
                countb++;
            }
            else if (s[i + k - 1] == 'W')
            {
                countw++;
            }
            if (countb == k)
            {
                minw = 0;
                break;
            }
            minw = min(minw, countw);
        }
        cout << minw << endl;
    }
    return 0;
}