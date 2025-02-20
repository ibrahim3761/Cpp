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
    /*cint*/ while (t--)
    {
        int y;
        cin >> y;
        while (true)
        {
            y += 1;
            int a = y / 1000;
            int b = y / 100 % 10;
            int c = y / 10 % 10;
            int d = y % 10;
            if (a != b && a != c && a != d && b != c && b != d && c != d)
            {
                break;
            }
        }
        cout << y << endl;
    }
    return 0;
}
