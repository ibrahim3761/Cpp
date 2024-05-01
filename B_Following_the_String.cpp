#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string s(n, 'a');
        map<char, int> indices;

        for (int i = 0; i < n; ++i) {
            if (a[i] > 0) {
                s[i] = 'a' + a[i];
                a[i]--;
            }
            indices[s[i]] = i;
        }

        char prev = 'a';
        for (int i = 0; i < n; ++i) {
            if (indices.find(s[i]) != indices.end() && indices[s[i]] != i) {
                s[i] = prev + 1;
            }
            prev = s[i];
        }

        cout << s << endl;
    }

    return 0;
}