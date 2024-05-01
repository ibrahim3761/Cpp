#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,count=0,d=7;
    cin>>n;

    vector<int>v(d);
    for ( i = 0; i <d; i++)
    {
        cin>>v[i];
    }
    while (sum<n)
    {
        for ( i = 0; i < d; i++)
        {
            sum+=v[i];
            count++;
            if (sum>=n)
            {
                break;
            }
        }
        if (count==7 && sum>=n)
        {
            break;
        }  
        else if (count==7)
        {
            count=0;
        }
    }
    cout<<count<<endl;
}