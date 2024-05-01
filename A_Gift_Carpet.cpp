#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define yo cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,i,j;
        cin >> n >> m;
        vector<string> s(n),sn;
        for(i=0; i<n; i++)
        {
            cin >> s[i];
        }
        for(i=0; i<m; i++)
        {
            string snew;
            for(j=0; j<n; j++)
                snew += s[j][i];
            sn.push_back(snew);
        }
        string found= "vika";
        j=0;
        i=0;
        while(i<m)
        {
            if (sn[i].find(found[j]) != string::npos)
            {
                j++;
            }
            if(j==4) {
                break;
            }
            i++;
        }
        if (j == 4){
            yo
        }
        else{
            no
        }
    }
    return 0;
}