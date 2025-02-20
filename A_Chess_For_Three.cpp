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
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if (p1==0 && p2==0 && p3==0)
        {
            cout<<"0"<<endl;
        }
        // else if (p1==p2 && p2==p3 && p1==p3)
        // {
        //     cout<<"-1"<<endl;
        // }
        else if ((p1+p2+p3)%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if (p1+p2<p3)
            {
                cout<<p1+p2<<endl;
            }
            else
            {
                cout<<(p1+p2+p3)/2<<endl;
            }
            
        }
    }
    return 0;
}
