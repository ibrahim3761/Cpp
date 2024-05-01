#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        vector<int>v(n);
        vector<int>b;
        vector<int>c;
        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1])
        {
            cout<<"-1"<<endl;
        }
        else
        {
            b.push_back(v[0]);
            for ( i = 1; i < n; i++)
            {
                c.push_back(v[i]);
            }
            for (int i = 0; i < c.size();)
            {
                if (b[0] % c[i] == 0)
                {
                    b.push_back(c[i]);
                    c.erase(c.begin() + i);
                }
                else
                {
                    i++; 
                }
            }
            cout << b.size() <<" "<<c.size()<<endl;
            for ( i = 0; i < b.size(); i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for ( i = 0; i < c.size(); i++)
            {
                cout<<c[i]<<" ";
            }
            cout << endl;
        }
    }
    return 0;
}