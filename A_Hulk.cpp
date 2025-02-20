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
    /*cint*/ while (t--)
    {
        int n ,i;
        cin >> n; 

        for ( i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                cout << "I hate"; 
            }
            else
            {
                cout << "I love"; 
            }

            if (i == n)
            {
                cout << " it"; 
            }
            else
            {
                cout << " that "; 
            }
        }

        cout << endl; 
    }
    return 0;
}
