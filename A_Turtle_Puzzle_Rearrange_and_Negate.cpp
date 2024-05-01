#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0,i;
        cin>>n;
       
        for(i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=abs(a);
        }
        cout<<sum<<endl;
    }
    return 0;
}