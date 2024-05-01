#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i<n; i++) {
            v[i] = i+1;
        }
        reverse(v.begin()+k,v.end());
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}