#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m, op = 0;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int s1=s.length();
        while (x.find(s)==string::npos) 
        {
            x += x;
            op++;
            if (x.length()>( n*m* s1))
            { 
                op=-1;
                break;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}
