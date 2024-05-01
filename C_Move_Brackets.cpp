#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,count=0,ans=0;
        string s;
        cin>>n>>s;
        for ( i = 0; i < n; i++)
        {
            if (s[i]=='(')
            {
                count++;
            }
            else
            {
                if (count>0)
                {
                    count--;
                }
                else
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}