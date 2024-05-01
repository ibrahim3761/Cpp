#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,product=1;
    cin>>a>>b;
    if(a>9||b>9)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<a*b<<endl;
    }
    return 0;
}