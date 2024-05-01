#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout>>"YES">>endl;
#define nn cout>>"NO">>endl;
/*int main() 
{
    int T,t;
    cin >> T;
    for(t=1;t<=T;t++) 
    {
        ll n,i,j,st=0;
        cin>>n;
        vector<ll>A(n);
        for (i=0;i<n;i++) 
        {
            cin>>A[i];
        }
        ll count = 0;  
        for (i=0;i<n;i++) 
        {
            j=i;
            while(j<n&&A[i]==A[j]) 
            {
                j++;
            }
            st=j-i;  
            count+=(st*(st+1))/2;
            i=j-1;
        }
        cout<<"Case "<<t<<": "<<n*(n+1)/2-count<<endl;
    }
    return 0;
}
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        string s;
        cin >> s;
        int n, w = 0, r = 0;
        n = s.length();
        for(int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
                w++;
            else
                r = r + (s[i] - '0');
        }
        int ov1 = n / 6;
        int ov2 = n % 6;

        if(ov1 > 1 &&  r > 1 && w > 1)
            cout << ov1 << "." << ov2 << " Overs "<< r << " Runs " << w << " Wickets" << endl;
        else if(ov1 > 1 &&  r > 1 && w <= 1)
            cout << ov1 << "." << ov2 << " Overs "<< r << " Runs " << w << " Wicket" << endl;
        else if(ov1 > 1 &&  r <= 1 && w <= 1)
            cout << ov1 << "." << ov2 << " Overs "<< r << " Run " << w << " Wicket" << endl;
        else if(ov1 > 1 &&  r <= 1 && w > 1)
            cout << ov1 << "." << ov2 << " Overs "<< r << " Run " << w << " Wicket" << endl;
        else if(ov1 < 1 &&  r > 1 && w > 1)
            cout << ov1 << "." << ov2 << " Over "<< r << " Runs " << w << " Wickets" << endl;
        else if(ov1 < 1 &&  r <= 1 && w > 1)
            cout << ov1 << "." << ov2 << " Over "<< r << " Run " << w << " Wickets" << endl;
        else if(ov1 < 1 &&  r > 1 && w <= 1)
            cout << ov1 << "." << ov2 << " Over "<< r << " Runs " << w << " Wicket" << endl;
        else if(ov1 < 1 &&  r <= 1 && w <= 1)
            cout << ov1 << "." << ov2 << " Over "<< r << " Run " << w << " Wicket" << endl;
        else if(ov == 1 && ov2>0 && r>1 && w>1)
          cout << ov1 << "." << ov2 << " Overs "<< r << " Runs " << w << " Wickets" << endl;
    }
    return 0;
}*/
int main()
{
    int t;
    cin >> t;

    for(int x = 1; x <= t; x++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int num = arr[i];

            for (int factor = 2; factor * factor <= num; factor++)
            {
                while (num % factor == 0)
                {
                    if(factor == k) count++;
                    num /= factor;
                }
            }
            if (num > 1)
            {
                if(num == k) count++;
            }
        }
        cout << "Case " << x << ": " << count << endl;
    }
    return 0;
}