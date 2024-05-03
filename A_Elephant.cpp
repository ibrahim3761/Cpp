/* Mohammad Ibrahim Abdullah*/
#include <bits/stdc++.h>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n%5==0)
        {
            cout<<n/5<<endl;
        }
        else
        {
            cout<<(n/5)+1<<endl;
        }
    }
    return 0;
}