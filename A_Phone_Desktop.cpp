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
        int x, y, count = 0;
        cin >> x >> y;
        if (y == 0)
        {
            if (x % 15 == 0)
            {
                count = x / 15;
                cout << count << endl;
            }
            else
            {
                count = (x + 14) / 15;
                cout << count << endl;
            }
        }
        else if (y==1)
        {
            int tg=x+(y*4);
            if (tg%15==0)
            {
                count=tg/15;
                cout<<count<<endl;
            }
            else
            {
                count=(tg+14)/15;
                cout<<count<<endl;
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                int sc = y / 2;
                count += sc;
                if (x % 7 == 0)
                {
                    int sc1 = x / 7;
                    if (sc1 > sc)
                    {
                        if ((sc1 % sc) < 15)
                        {
                            cout << count + 1 << endl;
                        }
                    }
                    else
                    {
                        cout << count << endl;
                    }
                }
                else
                {
                    int sc1 = (x + 6) / 7;
                    if (sc1 > sc)
                    {
                        if ((sc1 % sc) < 15)
                        {
                            cout << count + 1 << endl;
                        }
                    }
                    else
                    {
                        cout << count << endl;
                    }
                }
            }
            else
            {
                int sc = (y + 1) / 2;
                count += sc;
                if (x % 7 == 0)
                {
                    int sc1 = x / 7;
                    if (sc1 > sc)
                    {
                        if ((sc1 % sc) < 15)
                        {
                            cout << count + 1 << endl;
                        }
                    }
                    else
                    {
                        cout << count << endl;
                    }
                }
                else
                {
                    int sc1 = (x + 6) / 7;
                    if (sc1 > sc)
                    {
                        if ((sc1 % sc) < 15)
                        {
                            cout << count + 1 << endl;
                        }
                    }
                    else
                    {
                        cout << count << endl;
                    }
                }
            }
        }
    }
    return 0;
}
