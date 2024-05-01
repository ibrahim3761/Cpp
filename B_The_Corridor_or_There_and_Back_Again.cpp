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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,i;
        cin >> n;
        ll arr1[n],arr2[n],k=900000;
        for(i=0;i<n;i++)
        {
            cin >> arr1[i] >> arr2[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr2[i]>=3)
            {
                if(arr2[i]&1)
                {
                    k = min(k,arr1[i]+arr2[i]/2);
                }
                else
                {
                    k = min(k,arr1[i]+arr2[i]/2-1);
                }
            }
            else
            {
                k = min(k,arr1[i]);
            }
        }
        cout << k << endl;
    }
    return 0;
}