#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
 
    while (t--)
    {
        int n, k,count =1;
        cin >> n >> k;
 
        vector<int>v(n);
 
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(count == v[i])
            {
                count++;
            }
        }
        cout << (n + k - count) / k << endl;
    }
 
    return 0;
}