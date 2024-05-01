#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n,i, ml =0,fb = -1, lb = -1;
        cin >> n;
        string s;
        cin >> s;
        for ( i = 0; i < n; ++i)
        {
            if (s[i] == 'B') 
            {
                if (fb == -1) 
                {
                    fb = i;
                }
                lb = i;
            }
        }

        if (fb != -1) 
        {
            ml = lb - fb + 1;
        }

        cout << ml << endl;
    }
    return 0;
}