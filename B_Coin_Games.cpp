/* Mohammad Ibrahim Abdullah*/
#include <bits/stdc++.h>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;
int main()
{
    int t;
    cint while (t--)
    {
        int i,count=0,n;
        cin>>n;
        string s;
        cin>>s;
        for ( i = 0; i < s.size(); i++)
        {
            if (s[i]=='U')
            {
                count++;
            }
        }
        if (count%2==0)
        {
            no
        }
        else if(count%2!=0)
        {
            yes
        }
    }
    return 0;
}
