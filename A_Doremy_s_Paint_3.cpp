#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        if (freq.size() > 2)
        {
            cout << "No" << '\n';
        }
        else if (freq.size() == 1)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            vector<ll> ans;
            for (auto i : freq)
            { 
                ans.push_back(i.second);
            }

            if (abs(ans[0] - ans[1]) <= 1)
            {
                cout << "Yes" << '\n';
            }
            else
            {
                cout << "No" << '\n';
            }
        }
    }

    return 0;
}
