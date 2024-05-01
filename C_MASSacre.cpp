#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,t,s1=0,s2=0,d2=0;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin>>v[i];
    }
    int d1=INT_MAX;
    for (t=1;t<n;t++) 
    {
        s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++) 
        {
            if (i < t) 
            {
                s1+=v[i];
            } 
            else 
            {
                s2+=v[i];
            }
        }
        d2 = abs(s1-s2);
        d1 = min(d1, d2);
    }
    cout<<d1<<endl;
    return 0;
}
