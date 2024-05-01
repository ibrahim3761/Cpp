#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    vector<vector<int>>testcase;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n; j++){
            cin >> v[j];
        }
        testcase.push_back(v);
    }

    int x;
    cin >> x;
    vector<int>found;
    vector<vector<int>> result;
    int minBets = INT_MAX;

    for (int i = 0; i < t; i++) 
    {
        for (int j = 0; j < testcase[i].size(); j++) 
        {
            if (testcase[i][j] == x) 
            {
                if (testcase[i].size() < minBets) {
                    minBets = testcase[i].size();
                    found.clear();
                    found.push_back(i + 1);
                } else if (testcase[i].size() == minBets) {
                    found.push_back(i + 1);
                }
                break;  
            }
        }
    }

    cout << found.size() << endl;
    for (int i = 0; i < found.size(); i++)
    {
        cout << found[i] << " ";
    }
    cout << endl;
    return 0;   
}
