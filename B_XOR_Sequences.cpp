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
       int x,y,i;
       cin>>x>>y;
       vector<int>v;
       v.push_back(((x ^ y)&(-(x ^ y))));
       for ( i = 0; i < v.size(); i++)
       {
            cout<<v[i]<<endl;
       }
       
    } 
    return 0;
}
