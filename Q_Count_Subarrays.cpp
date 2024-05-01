#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc, n;
    cin >> tc;
    for (int i = 1; i <= tc; i++) 
    {
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int count = n;
        for (int j = 1; j < n; j++) 
        {
            for (int k = j; k < n; k++) 
            {
                if (a[k - 1] <= a[k]) 
                {
                    count++;
                } 
                else 
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
