#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,i;
        cin>>n;
        if(n % 2 == 1)
        {
            for( i = 1; i <= n; i++)
            {
                cout << "1 ";
            }
        }
        else
        {
            cout << "1 3 ";
            for(int i = 1; i <= n - 2; i++)
            {
                cout << "2 ";
            }
        }
        cout << endl;
    }
    return 0;
}