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
        vector<int>v1;
        for ( i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for ( i = 0; i < n-1; i++)
        {
            int min=max(v[i],v[i+1]);
            v1.push_back(min);
        }
        sort(v1.begin(),v1.end());
        cout<<v1[0]-1<<endl;
        
    } 
    return 0;
}
