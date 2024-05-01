#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int i,o=0,z=0,x;
        string s;
        cin>>s;
        for ( i = 0; i <s.size() ; i++)
        {
            if (s[i]=='0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        x=min(z,o);
        if (x%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }  
    }
    return 0;
}