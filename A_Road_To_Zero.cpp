#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a, b, sum = 0;
        cin >> x >> y >> a >> b;
        if (x>y)
        {
            swap(x,y);
        }
        sum+=a*(y-x);
        if (2*a<b)
        {
            sum+=x*(2*a);
        }
        else
        {
            sum+=x*b;
        }
        cout<<sum<<endl;
    }
    return 0;
}