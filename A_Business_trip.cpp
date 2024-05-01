#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int k,i,month=0,height=0;
    cin >> k;
    vector<int>a(12);
    for ( i = 0; i < 12; i++)
    {
        cin >>a[i];
    }
    sort(a.rbegin(),a.rend());
    for ( i = 0; i < 12; i++)
    {
        if (height>=k)
        {
            break;
        }
        height+=a[i];
        month++;
    }
    if (height<k)
    {
        cout <<"-1"<<endl;
    }
    else
    {
        cout << month<<endl;
    }
    return 0;
}