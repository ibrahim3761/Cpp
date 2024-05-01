#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,p;
    cin >>x>>y>>z;
    p=(x*100)+(y*10)+z;

    if (p%4==0)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
    return 0;
}