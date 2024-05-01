#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        bool flag=true;
        for (i = 1; i < n; i++)
        {
            if (a[i] % a[0] != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}