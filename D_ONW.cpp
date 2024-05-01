#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,p,q;
    cin >> n;
    vector<int> v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for ( i = 1; i < n-1; i++)
    {
        if (v[i]>v[0]&&v[i]<v[n-1])
        {
            count++;
        } 
    }
    cout << count <<endl;
    return 0;
}