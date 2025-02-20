#include <bits/stdc++.h>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;

int main()
{
    int t = 1;
    cint while (t--)
    {
        int n,m,i,j,k,l,count=0,count1=0,k1,k2=0;
        cin>>n>>m;
        char a[n][m];
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
                if (a[i][j]=='#')
                {
                    
                    k=i;
                    l=j;
                    break;
                }
            }
        }
        for ( j = k; j < n; j++)
        {
            if (a[j][l]=='.')
            {
                break;
            }
            else
            {
                count=j;
            }
        }
        j=(k+count)/2;

        for ( i = 0; i <m; i++)
        {
            if (a[k][i]=='#')
            {
                count1++;
                if (count1==1)
                {
                    k1=i;
                }
                k2++;
            }
            else if (a[i][j]=='.')
            {
                continue;
            }
        }
        i=(k1+k2)/2;
        cout<<i<<" "<<j<<endl;
        
    }
    return 0;
}
