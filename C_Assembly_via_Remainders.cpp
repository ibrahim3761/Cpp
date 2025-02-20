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
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long> x(n-1);
        vector<long long> a(n);
        for(int i=0;i<n-1;i++){
            cin>>x[i];
        }
        int x1=501;
        cout<<x1<<" ";
        for(int i=1;i<n;i++){
            cout<<x[i-1]+x1<<" ";
            x1+=(x[i-1]);
        }
        cout<<endl;
    }
    return 0;
}