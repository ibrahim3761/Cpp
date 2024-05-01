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
        ll n,k,x;
        cin >>n>>k>>x;

        ll min=(k * (k + 1)) / 2;
        ll max=(n * k - (k * (k - 1)) / 2);

        if (x>=min && x<=max) 
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