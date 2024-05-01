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
       int i,k,count=0;
       string s;
       cin >> s;
       for ( i = 0; i <s.size()-1; i++)
       {
            if ((s[i]=='A'&&s[i+1]=='B')||(s[i]=='B'&&s[i+1]=='A'))
            {
                count++;

            }
       }
       cout <<count <<endl;
    }
    return 0;
}