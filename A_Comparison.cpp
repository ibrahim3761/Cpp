#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,count=1,cost=1;
        cin >> n;
        string s;
        cin >> s;
        for(i=1; i<n; i++)
        {
            if(s[i] == s[i-1])
            {
                count++;
            }
            else
            {
                cost = max(count,cost);
                count=1;
            }
        }
        cost = max(count,cost);
        cout << cost+1 << endl;

    }
    return 0;
}