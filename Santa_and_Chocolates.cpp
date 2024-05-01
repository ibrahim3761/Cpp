#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin >>t;
	while(t--)
	{
	    ll n, k;
        cin >> n >> k;
        vector<int>v(n);
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum < n)
            cout<<"NO"<<endl;
        else
        {
            int r = sum % n;
            if (r != 0 && k == 0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
	}
	return 0;
}
