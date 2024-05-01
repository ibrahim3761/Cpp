#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,i;
        long long power=0;
        cin >>n;
        vector<int> v(n);
        vector<int>vb;
        for ( i = 0; i < n; i++)
        {
            cin >>v[i];
        }
        for ( i = 0; i < n; i++)
        {
            if (v[i]==0&&!vb.empty())
            {
                int size;
                sort(vb.begin(),vb.end());
                size=vb.size();
                power+=vb[size-1];
                vb.pop_back();
            }
            else
            {
                vb.push_back(v[i]);
            }
        }
        cout<<power<<endl;
    }
    return 0;
}