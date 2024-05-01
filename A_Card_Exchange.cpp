/* Mohammad Ibrahim Abdullah*/
#include<bits/stdc++.h>
#define N 100005
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ll long long
#define ull unsigned long long
#define cint cin>>t;
using namespace std;
int main()
{
    int t;
    cint
    while (t--)
    {
        int n,k,v[101]={0},j,flag=0;
        cin>>n>>k;
        for ( j = 0; j < n; j++)
        {
            int t;
            cin>> t;
            v[t]++;
        }
        for ( j = 0; j < 101; j++)
        {
            if (v[j]>=k)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
        {
            cout<<k-1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
    return 0;
}
