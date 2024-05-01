#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,max=0,count=0;
        cin >> n;
        vector <int> v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=n-1; i>=0; i--)
        {
            if(v[i]>max)
            {
                max=v[i];
                count++;
            }
        }
        cout << count -1 << endl;
    }
    return 0;
}
