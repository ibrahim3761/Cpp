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
    int t = 1;
    cint while (t--)
    {
        int n,p = 1,i;
        cin >> n;
        vector<int> v;
        while (n > 0)
        {
            if (n%10>0)
            {
                v.push_back((n%10)*p);
            }
            n/=10;
            p*= 10;
        }
        cout<<v.size()<<endl;
        for (i=0;i<v.size();i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
