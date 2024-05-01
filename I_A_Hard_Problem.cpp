#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,f=1;
        cin >> n;
        vector<int>v(n);
        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for ( i = 0; i <n-1; i++)
        {
            if (v[i]>=v[i+1])
            {
                f=0;
            }
        }
        if (f==1)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }
    return 0;
}