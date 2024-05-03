/* Mohammad Ibrahim Abdullah*/
#include <bits/stdc++.h>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        double n,i,sum=0;
        cin>>n;
        vector<double>v(n);
        for ( i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        double divisor=sum/n;
        cout<<fixed<<setprecision(12)<<divisor<<endl;
    }
    return 0;
}