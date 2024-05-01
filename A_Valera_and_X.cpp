#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f = 0, i, j, m, dc = 0;
    cin >> n;
    char a[n][n], d, c;
    int l = n - 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    d = a[0][0];
    c = a[0][1];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (d == c)
            {
                f = 1;
                break;
            }
            if (a[i][j] != d && a[i][j] != c)
            {
                f = 1;
                break;
            }
            if (a[i][i] != d)
            {
                f = 1;
                break;
            }

            if (a[i][j] == d)
            {
                dc++;
            }
            m = i;
            if (a[m][l] != d)
            {
                f = 1;
                break;
            }
        }
        l--;
    }
    if (f == 1)
    {
        cout << "NO" << endl;
    }
    else if (f == 0)
    {
        if (dc != (n * 2) - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}