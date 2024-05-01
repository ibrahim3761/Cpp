#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, i,j, f = 0, f1 = 0;
        cin >> n;
        string s;
        s = to_string(n);
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != '1' && s[i] != '0')
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            int n1 = n;
            string s1;
            while (n1 >11)
            { 
                s1 = to_string(n1);
                for (j = 0; j < s1.size(); j++)
                {
                    if (s1[j] != '1' && s1[j] != '0')
                    {
                        f1 = 1;
                        break;
                    }
                }
                n1 /= 11;
            }
            if (f1==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}