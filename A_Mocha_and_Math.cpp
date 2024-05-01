#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        vector <int>v(n);
        for ( i = 0; i <n; i++)
        {
            cin >> v[i];
        }
        int a=v[0];
        for ( i = 0; i < n; i++)
        {
            a=a & v[i];
        }
        cout << a<<endl;;
    }
    return 0;
}