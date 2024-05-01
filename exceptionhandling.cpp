#include <bits/stdc++.h>
#define push                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(v.begin(), v.end())
#define sdc sort(v.begin(), v.end(), greater<int>())
#define f1 bool flag = true
#define f0 bool flag = false
#define c0 int count = 0
#define c1 int count = 1
#define s0 long long sum = 0
#define a0 long long ans = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

int main()
{
    push;
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        v.push_back({s, 1});
        v.push_back({e, -1});
    }

    sac;
    c0;
    int count2 = 0;

    for (const pair<int, int> &u : v)
    {
        count += u.second;
        count2 = max(count2, count);
    }

    cout << count2 << endl;

    return 0;
}