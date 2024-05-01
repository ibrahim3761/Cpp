#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,t,p;
    cin >> s >> t;
    p = s; 
    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] != t[i]) {
            p[i] = '1'; 
        } else {
            p[i] = '0'; 
        }
    }
    if (p == s || p == t) 
    {
        cout << "impossible" << endl;
    } 
    else 
    {
        cout << p << endl;
    }
    return 0;
}
