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
    cin >> t;
    while (t--)
    {
        int i,n,k,found=0;
        cin >> n>>k;
        vector<int>a(n);
        for ( i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]==k)
            {
                found =1;
            }
        }
        if (found ==1)
        {
            yo
        }
        else
        {
            no
        }     
    }
    return 0;
}