#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,n,i;
    cin >> t;
    while(t--)
    {
        long long sum=0,chair,max=INT_MAX,min=INT_MIN,z;
        cin >> n >> m;
        for(i=0; i<n; i++)
        {
            cin >> z;
            sum += z;
            if(max<z)
            {
                max=max;
            }
            else 
            {
                max=z;
            }
            if(min>z)
            {
                min=min;
            }
            else 
            {
                min=z;
            }
        }
        chair = n+sum+min-max;
        if(chair<=m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}