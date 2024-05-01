#include<bits/stdc++.h>
using namespace std;
#define  ll long long int 
const int MOD = 1e9 + 7;
#define  deb(x) cout << #x << "=" << x << endl;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,sum=0,moves=0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin( ), a.end());
        if (sum % 3 == 0) 
        {
           cout<<moves<<endl;
        }
        else if (sum%3==1)
        {
            moves=1;
            cout<<moves<<endl;
        }
        else if (sum%3==2)
        {
                        
        }
    
        
        cout << moves << endl;
    }
    return 0;
}