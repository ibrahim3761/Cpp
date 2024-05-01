#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, max = 0, ans = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= m)
        {
            v[i] = 0; // 6 0 5 4 0 0 0    m=3; 2 0 2 0
        }
    }
    for (i = 0; i < n; i++)
    {
        //cout<<(double)ceil(v[i] / m)<<endl;
        if (ceil((double)v[i] / m) >= max)
        {
            max = ceil((double)v[i] / m);
            
            ans = i;
        }
    }
    /*for (i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
    cout<<endl;*/
    cout << ans + 1 << endl;

    return 0;
}