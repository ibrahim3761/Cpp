#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define yo cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
//I am Ibrahim
//Yemete kudaisa

using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        ll n,i,product=1;
        cin >>n;
        vector<ll>v(n);
        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        v[0]+=1;
        for ( i = 0; i < n; i++)
        {
            product*=v[i];
        }
        cout << product<<endl;
    }
    return 0;
}