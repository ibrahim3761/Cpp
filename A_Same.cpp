#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
    int n,i,f=1;
    cin >>n;
    vector<int>v(n);
    for ( i = 0; i < n; i++)
    {
        cin >>v[i];
    }
    int fv=v[0];
    for ( i = 1; i < n; i++)
    {
        if (v[0]!=v[i])
        {
            f=0;
            break;
        }
    }
    if (f==1)
    {
        yes
    }
    else
    {
        no
    }
    
    
}