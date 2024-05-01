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
        int n, i, count = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> v;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] <= b[i])
            {
                v.push_back(a[i]);
            }
            else
            {
                a.insert(a.begin() + i, b[i]);
                v.push_back(b[i]);
                count++;
            }
        }
        cout  << count << endl;
    }
    return 0;
}
