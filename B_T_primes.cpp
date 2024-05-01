
#include <bits/stdc++.h>
using namespace std;
bool a[1000005];
vector<int>v;
void sieve()
{
    a[0] = a[1] = false;

    for (int i = 2; i < 1000005; i++)
    {
        if (a[i])
        {
            v.push_back(i);
            for (long long j = (long long)i * i; j < 1000005; j += i)
            {
                a[j] = false;
            }
        }
    }
}
int main()
{
    fill(a, a + 1000005, true);
    sieve();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long  x;
        cin >> x;
        long long m = sqrt(x);

        if (m * m == x && binary_search(v.begin(), v.end(), m))
        {
            cout<<"YES"<<endl;;
        }
        else
        {
            cout<<"NO"<<endl;;
        }
    }
    return 0;
}