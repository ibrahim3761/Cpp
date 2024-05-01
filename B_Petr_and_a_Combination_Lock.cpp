#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,f=1;
    cin >> n;
    vector <int> v(n);
    for ( i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for ( i = 0; i < (1<<n); i++)
    {
        sum=0;
        for ( j = 0; j < n; j++)
        {
            if (i & (1<<j))
            {
                sum+=v[j];
            }
            else{
                sum-=v[j];
            }
            sum=(sum+360)%360;
        }
        if (sum==0)
        {
            f=0;
            break;
        }
        
    }
    if (f==0)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
    return 0;
}