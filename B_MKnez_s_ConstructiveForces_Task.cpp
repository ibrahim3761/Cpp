#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,x=0,y=0;
        cin >> n;
        if (n & 1)
        {
            if (n == 3)
            {
                cout<<"no"<<endl;;
                continue;
            }
            cout<<"yes"<<endl;;
            x = n / 2;
            y = -(x - 1);
            for ( i = 1; i <= n; i++)
            {
                if (i % 2)
                {
                    cout << y << " ";
                }
                else
                {
                    cout << x << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for ( i = 1; i <= n; i++)
            {
                if (i % 2)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}