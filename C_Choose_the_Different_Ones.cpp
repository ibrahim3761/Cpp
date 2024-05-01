#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
bool possible(int n, int m, int k, int a[], int b[]) {
    int a_count[k + 1] = {0};
    int b_count[k + 1] = {0};
    for (int i = 0; i < n; ++i) {
        if (a[i] <= k) {
            a_count[a[i]]++;
        }
    }
    for (int i = 0; i < m; ++i) {
        if (b[i] <= k) {
            b_count[b[i]]++;
        }
    }
    if (a_count[0] > 0 || b_count[0] > 0) {
        return false;
    }
    for (int i = 1; i <= k / 2; ++i) {
        if (max(a_count[i], b_count[i]) > k / 2) {
            return false;
        }
    }
    int total = 0;
    for (int i = 1; i <= k; ++i) {
        total += min(a_count[i], b_count[i]);
    }
    return total >= k / 2;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        int b[m];
        for (int j = 0; j < m; ++j) {
            cin >> b[j];
        }
        bool ans = possible(n, m, k, a, b);
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}