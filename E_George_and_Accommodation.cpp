#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,p,q,x;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>p>>q;
        x=q-p;
        if (x>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}