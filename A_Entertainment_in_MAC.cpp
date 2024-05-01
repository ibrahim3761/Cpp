#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,i,j;
        string s,s1;
        cin >> n >> s;
        j=s.size();
        if (s[0]<s[j-1])
        {
            cout<<s<<endl;
        }
        else
        {   
            if(s[0]>s[j-1])
            {
                s1=s;
                reverse(s1.begin(),s1.end());
                cout<<s1+s<<endl;
            }
            else if(s[0]==s[j-1])
            {
                int f=0;
                i=1,j=j-2;
                while (i<j)
                {
                    if (s[i]==s[j])
                    {
                        i++;
                        j--;
                        f=0;
                    }
                    else if (s[i]<s[j])
                    {
                        cout<<s<<endl;
                        f=1;
                        break;
                    }
                    else if(s[i]>s[j])
                    {
                        s1=s;
                        reverse(s1.begin(),s1.end());
                        cout<<s1+s<<endl;
                        f=1;
                        break;
                    }
                }
                if (f==0)
                {
                cout<<s<<endl;
                }
                
            }
        }
    }
    return 0;
}

