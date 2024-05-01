#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n,f=1;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        string s;
        cin >> s;
        char Chars[51] = {'\0'};
        for (int i = 0; i < n; i++) {
        if (Chars[v[i]] == '\0') {
            Chars[v[i]] = s[i];
        } else if (Chars[v[i]] != s[i]) {
            cout << "NO" << endl;
            f=0;
            break;
        }
        }
        if(f==1){
            cout<< "YES" <<endl;
        }
    }
    return 0;
}