#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,count=0;
        cin >> n;
        vector <int>v(n);
        for ( i = 0; i < n; i++)
        {
            cin >>v[i];
        }
        for ( i = n-2; i >=0; i--)
        {
            while (v[i]>0 && v[i]>=v[i+1])
            {
                v[i]/=2;
                count++;
            }
            if  (v[i]>=v[i+1])
            {
                count=-1;
                break;
            }
        }
        cout << count <<endl;
    }
    
    return 0;
}