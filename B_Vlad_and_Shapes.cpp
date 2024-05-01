#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, count = 0;
        cin >> n;
        vector<int> v;
        while (n--)
        {
            string s;
            cin >> s;
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {
                    count++;
                }
            }
            if (count > 0)
            {
                v.push_back(count);
            }
            count = 0;
        }
        int f=0;
        for ( i = 0; i < v.size(); i++)
        {
            if (v[i]==1)
            {
                f=1;
                break;
            }
        }
        if (f==1)
        {
            cout<<"TRIANGLE"<<endl;
        }
        else
        {
            cout<<"SQUARE"<<endl;
        }
        
    }
    return 0;
}
