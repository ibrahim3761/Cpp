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
        ll n,i,sum=0;
        cin>>n;
        if (n%2==0)
        {
            cout<<n/2<<endl;
        }
        else
        {
            cout<<-((n+1)/2)<<endl;
        }
    }
    return 0;
}