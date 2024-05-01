#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans; cin >> n;
 
        ans = n % 8;
 
        if (n == 0) cout << "1" << endl;
        else if (ans == 0) cout << "6" << endl;
        else if (ans == 1) cout << "8" << endl;
        else if (ans == 2) cout << "4" << endl;
        else if (ans == 3) cout << "2" << endl;
        else if (ans == 4) cout << "6" << endl;
        else if (ans == 5) cout << "8" << endl;
        else if (ans == 6) cout << "4" << endl;
        else if (ans == 7) cout << "2" << endl;
 
    return 0;
}