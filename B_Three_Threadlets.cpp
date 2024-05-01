#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define lul long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int a,b,c,f=1,count=0;
       cin >> a >> b >> c;
       int m = min({a,b,c});
       if(a%m!=0 || b% m !=0 || c% m !=0) f=0;
       while(a!=m)
       {
           if(a%m!=0||count>3)
           {
               f=0;
               break;
           }
           a-=m;
           count++;
       }
       while(b!=m)
       {
           if(b%m!=0||count >3)
           {
               f=0;
               break;
           }
           b-=m;
           count++;
       }
       while(c!=m)
       {
           if(c%m!=0||count>3)
           {
               f=0;
               break;
           }
           c-=m;
           count++;
       }
       if(count>3)
       { 
        f=0;
       }
       if(f) 
       {
            yes
       }
        else
        { 
                no
        }
    }
    return 0;
}