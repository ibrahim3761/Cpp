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
        int n,i;
        cin>>n;
        vector<int>v(n);
        for ( i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for ( i = 0; i < n-1; i++)
        {
            if (v[i]^v[i+1]<4)
            {
                temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
        }
        
    }
    return 0;
}
