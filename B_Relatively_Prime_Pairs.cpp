#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll l,r,i;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for ( i = l; i < r+1; i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}