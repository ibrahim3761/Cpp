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
        ll n;
        cin >> n;

        ll sum = 0,count = 0; 
        vector<ll> v(n); 
        set<ll> st;  

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            st.insert(v[i]);

            if (sum % 2 == 0) {
                if (st.count(sum / 2))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
