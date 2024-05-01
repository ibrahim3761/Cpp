#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n,i,j;
    cin >> n;
    vector<int> e(n);
    vector<int> o(n);
    for ( i = 0; i < n; i++) 
    {
        cin >> e[i] >> o[i];
    }
    int maxEmp = 0;
    for ( j = 0; j < 24; j++) 
    {
        int employees = 0;
        for ( i = 0; i < n; i++) 
        {
            int baseTime = (j - o[i] + 24) % 24;
            if (baseTime >= 9 && baseTime < 18) 
            {
                employees += e[i];
            }
        }
        maxEmp = max(maxEmp, employees);
    }
    cout << maxEmp << endl;
    return 0;
}