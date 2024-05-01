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
    cin >>t;
    while(t--)
    {
       int n,i,k,count=0;
       cin >>n>>k;
       string s;
       cin >> s;
       for ( i = 0; i < n; i++)
       {
            if (s[i]=='B')
            {
                count++;
                i+=k-1;
            }
       }
       cout <<count <<endl;
    }
    return 0;
}