#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,count=0;
    cin>>x;
    bitset<sizeof(int)*8>binary(x);
    string s;
    s=binary.to_string();
    for ( i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')
        {
            count++;
        }
    }
    cout<<count<<endl;
}