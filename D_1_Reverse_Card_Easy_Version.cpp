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
        int i, count = 0, n, m, a=1, b=1;
        cin >> n >> m;
        string s;
        cin >> s;
        while (a < n+1)
        {
            b = 1;
            while (b < m+1)
            {
                if ((a + b) % (b * __gcd(a, b)) == 0)
                {
                    count++;
                    b++;
                }
                else
                {
                    b++;
                } 
            }
            a++;
        }

        cout << count << endl;
    }
    return 0;
}
