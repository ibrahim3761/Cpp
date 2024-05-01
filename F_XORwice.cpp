#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long res=0,a,b;
        cin >> a >> b;
        res = a ^ b;
        cout << res << endl;
    }
    return 0;
}