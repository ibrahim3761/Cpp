#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int count = 0,sum=0;
    while (s.size() > 1)
    {
        sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        count++;
    }

    cout << count << endl;
    return 0;
}
