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
        int n,j,i;
        cin >> n;
        vector<int> v(n);
        vector<int> s;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        s.push_back(v[0]);
        for ( i = 1; i < n; i++)
        {
            if (v[i]!=v[i-1])
            {
                s.push_back(v[i]);
            }
        }
        for ( i = s.size()-1; i > 0; i--)
        {
            s[i]=s[i]-s[i-1];
        }
        bool ans=true;
        for ( i = 0; i < s.size(); i++)
        {
            if (i==s.size()-1)
            {
                break;
            }
            if (s[i]==1)
            {
                ans=!ans;
            }
            else
            {
                break;
            }
        }
        if (ans)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
