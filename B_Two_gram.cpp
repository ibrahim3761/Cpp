#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0,count1=0;
    cin >>n;
    string s,s1;
    cin >>s;
    for ( i = 0; i < n-1; i++)
    {
        count=0;
        for ( j = 0; j < n-1; j++)
        {
            if (s[i]==s[j]&&s[i+1]==s[j+1])
            {
                count++;
                if (count1<count)
                {
                    count1=count;
                    s1.erase();
                    s1+=s[i];
                    s1+=s[i+1];
                }
            }
        }
    }
    cout<<s1<<endl;
    return 0;
}