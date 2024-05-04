#include <iostream>
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
        int n, m, k;
        cin >> n >> m >> k;
        ll v = n / m;
        if (n % m != 0)
        {
            v += 1;
        }
        n -= v;
        if (n > k)
        {
            yes
        }
        else
        {
            no
        }
    }
    return 0;
}
