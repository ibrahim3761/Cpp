#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int countA = 0, countB = 0;
        for (char ch : s) 
        {
            if (ch == 'A') 
            {
                countA++;
            } 
            else 
            {
                countB++;
            }
        }

        if (countA > countB) 
        {
            cout << "A" << endl;
        } 
        else 
        {
            cout << "B" << endl;
        }
    }

    return 0;
}
