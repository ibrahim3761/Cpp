#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  ull unsigned long long
#define  pb push_back
#define  mp make_pair
#define   f first
#define  s second
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int a,b,c,lb=0,lc=0,tb=0,tc=0,n=0;
        cin >>a>>b>>c;
        tb=b/3;
        b=b%3;
        if (b!=0 &&b+c<3)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            tc=(b+c)/3;
            lc=(b+c)%3;
            if (lc>0)
            {
                n=1;
            }
            else{
                n=0;
            }
            cout<<a+tb+tc+n<<endl;
        }

    }
    return 0;
}
