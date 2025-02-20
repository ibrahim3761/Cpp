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
        int n, m, i = 0, j = 0, k = 0;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                k++;
                i++;
            }
            j++;
        }
        cout << k << endl;
    }
    return 0;
}