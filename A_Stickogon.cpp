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
        int n,i,count=0,count1=0;
        cin>>n;
        vector<int>v(101,0);
        for ( i = 0; i < n; i++)
        {
            int l;
            cin>>l;
            v[l]++;
        }  
        for ( i = 1; i <=100; i++)
        {
           count+=v[i]/3;
        }
        cout<<count<<endl;
    }
    return 0;
}