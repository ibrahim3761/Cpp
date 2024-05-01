/* Mohammad Ibrahim Abdullah*/
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
    int t;
    cint while (t--)
    {
        int n, m, i, j;
        cin >> n >> m;
        char c[n][m];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> c[i][j];
            }
        }
        bool f = false;
        

        if (c[0][0] == 'W')
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (c[i][j] == 'W')
                    {
                        f = true;
                        continue;
                    }
                    else
                    {
                        f = false;
                        break;
                    }
                }
            }
            if (f == false)
            {
                for (i = 0; i < n; i++)
                {
                    if (c[i][0] == 'B')
                    {
                        f = true;
                        break;
                    }
                    else
                    {
                        f=false;
                    }
                    
                }
                if (f == true)
                {
                    for (i = 0; i < n; i++)
                    {
                        if (c[i][m - 1] == 'B')
                        {
                            f = true;
                            break;
                        }
                        else
                        {
                            f = false;
                        }
                    }
                }
                if (f == true)
                {
                    for (j = 0; j < m; j++)
                    {
                        if (c[0][j] == 'B')
                        {
                            f = true;
                            break;
                        }
                        else
                        {
                            f = false;
                        }
                    }
                }
                if (f == true)
                {
                    for (j = 0; j < m; j++)
                    {
                        if (c[n - 1][j] == 'B')
                        {
                            f = true;
                            break;
                        }
                        else
                        {
                            f = false;
                        }
                    }
                }
            }
        }
        else if (c[0][0] == 'B')
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (c[i][j] == 'B')
                    {
                        f = true;
                        continue;
                    }
                    else
                    {
                        f = false;
                        break;
                    }
                }
            }
            if (f == false)
            {
                for (i = 0; i < n; i++)
                {
                    if (c[i][0] == 'W')
                    {
                        f = true;
                        break;
                    }
                    else
                    {
                        f = false;
                    }
                }

                if (f == true)
                {
                    for (i = 0; i < n; i++)
                    {
                        if (c[i][m - 1] == 'W')
                        {
                            f = true;
                            break;
                        }
                        else
                        {
                            f = false;
                        }
                    }
                }
                if (f == true)
                {
                    for (j = 0; j < m; j++)
                    {
                        if (c[0][j] == 'W')
                        {
                            f = true;
                            break;
                        }
                        else
                        {
                            f = false;
                        }
                    }
                }
                if (f == true)
                {
                    for (j = 0; j < m; j++)
                    {
                        if (c[n - 1][j] == 'W')
                        {
                            f = true;
                            break;
                        }
                        else
                        {
                            f = false;
                        }
                    }
                }
            }
        }
        if (f == true)
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