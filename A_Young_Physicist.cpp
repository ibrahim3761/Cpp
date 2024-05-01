#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,suma=0,sumb=0,sumc=0;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;
    }
    if (suma==0&&sumb==0&&sumc==0)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
    return 0;
}
