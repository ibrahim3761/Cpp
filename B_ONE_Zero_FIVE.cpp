#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count1=0,count2=0;
    cin>>n;
    for ( i = 1; i <= n; i+=2)
    {
        count1=0;
        for ( j = 1; j <= i; j+=2)
        {
            if (i%j==0)
            {
                count1++;  
            }
        }
        if (count1==8)
        {
            count2++;
        } 
    }
    cout<<count2<<endl;
    return 0;
}