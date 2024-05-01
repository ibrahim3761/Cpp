#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >>n;
    vector<int>a(n);
    for ( i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    sort(a.begin(),a.end());

    for ( i = 0; i < n-1; i++)
    {
        cout <<a[i]<<" ";
    }
    cout <<a[n-1]<<endl;
    return 0;
}