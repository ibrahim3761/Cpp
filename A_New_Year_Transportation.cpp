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
    while (t--)
    {
        int i,n,t,pos=1,next;
        cin>>n>>t;
        vector<int>v(n);
        for ( i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        while (pos<t)
        {
            next=pos+v[pos-1];
            pos=next;
        }
        if (pos==t)
        {
            yes
        }
        else
        {
            no
        }
                
    }
    return 0;
}
