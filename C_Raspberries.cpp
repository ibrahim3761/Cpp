/*int main(){
    yemete kudaisa;
}*/
#include<bits/stdc++.h>
using namespace std;
#define yey cout<<"Yes"<<endl;
#define nada cout<<"No"<<endl;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,i;
        cin >> n >> k;
        vector<int> v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        if(k==4)
        {
            int cnt1=k,cnt2= 2;
            for(i=0;i<n;i++)
            {
                if(v[i]%4==0)
                {
                    cnt1=0;
                    break;
                }
                else
                {
                    if(cnt1>k - v[i]%k)
                    {
                        cnt1=k - v[i] %k;
                    }
                }
            }

            for(i=0;i<n;i++)
            {
                if(v[i]%2==0)
                {
                cnt2= max(cnt2-1,0);
                }
            }
            cout << min(cnt2,cnt1) << endl;
        }
        else
        {
            int cnt1=k;
            for(i=0;i<n;i++)
            {
                if(v[i]%k == 0)
                {
                    cnt1=0;
                    break;
                }
                else
                {
                    if(cnt1>k - v[i]%k)
                    {
                        cnt1= k- v[i]%k;
                    }
                }
            }
            cout << cnt1 << endl;
        }
    }
    return 0;
}