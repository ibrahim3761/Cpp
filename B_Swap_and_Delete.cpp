#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int i,one=0,zero=0;
        string s;
        cin >>s;
        for ( i = 0; i < s.size(); i++)
        {
            if (s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }  
        }
        for ( i = 0; i < s.size(); i++)
        {
            if (s[i]=='1')
            {
                if (zero>0)
                {
                    zero--;
                }
                else
                {
                    break;
                } 
            }
            else
            {
                if (one>0)
                {
                    one--;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<one+zero<<endl;
    }
    return  0;
}