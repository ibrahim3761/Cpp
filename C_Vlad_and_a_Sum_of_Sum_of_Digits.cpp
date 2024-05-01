#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i = 1; i <= n; i++) 
        {
            int j=i;
            while (j > 0)
            {
                sum += j % 10;
                j /= 10;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
