#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define yo cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
//I am Ibrahim
//Yemete kudaisa

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,g,i;
        cin >> n;
        vector<int> a(n);
        g=-2;
        for(i=0; i<n; i++)
        {
            g+=3;
            cout << g << " ";
        }
        cout << endl;
    }
    return 0;
}