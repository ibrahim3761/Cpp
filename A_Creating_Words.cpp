#include <bits/stdc++.h>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;

int main()
{
    int t = 1;
    cint while (t--)
    {
        int n, i;
        string s,s1;
        cin >> s >> s1;
        char temp=s[0];
        s[0]=s1[0];
        s1[0]=temp;
        cout<<s <<" "<<s1 <<endl;
    }
    return 0;
}
