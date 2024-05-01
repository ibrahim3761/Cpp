#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int res = 0,n,a,b,i;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            res |= a;
        }
        cout << res << endl;
    }
    return 0;
}