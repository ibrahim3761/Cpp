#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, f = 0,sum=0;
        cin >> n;
        vector<int> v(n);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            if (v[i] == -1 && v[i+1] == -1)
            {
                v[i] *= -1;
                v[i + 1] *= -1;
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (v[i] == -1 && v[i + 1] == 1)
                {
                    f = 1;
                    break;
                }
                if (v[i] == 1 && v[i + 1] == -1)
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
        {
            for (i = 0; i < n - 1; i++)
            {
                if (v[i] == 1 && v[i + 1] == 1)
                {
                    v[i] *= -1;
                    v[i + 1] *= -1;
                    f = 1;
                    break;
                }
            }
        }
        for ( i = 0; i < n; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
