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
    cin>>t;
    while(t--)
    {
        ll a,b,c,move=0;
        cin>>a>>b>>c;
        if(a==b) {
            move=0;
        }
        else if(a<b)
        {
            while(a<b)
            {
                a+=c;
                b-=c;
                move++;
                if(a>=b) 
                {
                    break;
                }
            }
        }
        else
        {
            while(a>b)
            {
                a-=c;
                b+=c;
                move++;
                if(a<=b)
                { 
                    break;
                }
            }
        }
        cout<<move<<endl;
    }
    return 0;
}