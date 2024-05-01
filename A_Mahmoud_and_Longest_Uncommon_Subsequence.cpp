#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if (a==b)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int n=a.length(),n1=b.length();
        if (n>n1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n1<<endl;
        }
    }
    return 0;
}