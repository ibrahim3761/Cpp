#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int i=0,n;
        string s,s1="";
        cin >>s;
        if (s=="()")
        {
            cout<<"NO"<<endl;
        }
        else{
            n=s.length();
            bool check = false;
            while (i<n-1)
            {
                if (s.substr(i,2)==")(")
                {
                    check=true;
                    break;
                }
                i++;
            }
            if (check)
            {
                for ( i = 0; i < n; i++)
                {
                    s1+="(";
                }
                for ( i = 0; i < n; i++)
                {
                    s1+=")";
                }
                cout<<"YES"<<endl;
                cout<<s1<<endl;
            }
            else
            {
                for ( i = 0; i < n; i++)
                {
                    s1+="()";
                }
                if (s1==s)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<s1<<endl;
                }
            }
        }
    }
    return 0;
}