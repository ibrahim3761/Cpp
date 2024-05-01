#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count =0,ans=0;
    cin>>n;
    vector<int>v(n);
    vector<int>v1(n);
    for ( i = 0; i < n; i++)
    {
        cin >>v[i];
        v1[i]=v[i];
    }
    sort(v1.begin(),v1.end());
    for ( i = 0; i < n; i++)
    {
        if (v1[0]==v[i])
        {
            count++;
            ans=i;
            if (count==2)
            {
                break;
            } 
        }
    }
    if (count == 2)
    {
        cout << "Still Rozdil" << endl;
    }
    else{
        cout << ans + 1 << endl;
    }
    return 0;
    
}