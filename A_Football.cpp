#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;

    string t1,t2;
    cin >> t1;

    int gt1 = 1, gt2 = 0;

    for (int i = 1; i < n; ++i) {
        string t;
        cin >> t;

        if (t == t1)
        {
            gt1++;
        }
        else 
        {
            t2 = t;
            gt2++;
        }
    }

    if (gt1 > gt2)
    {
        cout << t1 << endl;
    }
    else
    {
        cout << t2 << endl;
    }
    return 0;
}
