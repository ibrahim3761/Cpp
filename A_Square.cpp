            //Bismillahir Rahmanir Rahim//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x[4], y[4],length=0;
        for (int i = 0; i < 4; i++) 
        {
            cin>>x[i]>>y[i];
        }
        sort(x, x + 4);
        length=(x[2]-x[1]);
        cout<<length*length<<endl;
    }

    return 0;
}
