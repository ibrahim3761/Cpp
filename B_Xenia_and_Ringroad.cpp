#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,pos=1,count=0;
    cin>>n>>m;
    for ( i = 0; i < m; i++)
    {
        int des;
        cin>>des;
        if (des>=pos)
        {
            count+=des-pos;
        }
        else
        {
            count+=n-(pos-des);
        }
        pos=des;
    }
    cout<<count<<endl;
    return 0; 
}