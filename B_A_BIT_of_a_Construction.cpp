#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define pb push_back
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
       int n,k,i;
       cin>>n>>k;
       vector<int>v(n,0);
       for ( i = 0; i < n-1; i++)
       {
            v[i]=1;
            k--;
       }
       v[n-1]=k;
       for ( i = 0; i < n; i++)
       {
            cout<<v[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}