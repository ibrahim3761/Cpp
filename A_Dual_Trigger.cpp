#include <iostream>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
#define vint vector<int>v;
#define vin v.push_back(i);
using namespace std;
int main()
{
    int t;
    cint while (t--)
    {
        int n, i, count = 0, f = 0;
        string s;
        cin >> n >> s;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        if (count % 2 != 0 )
        {
            no
        }
        else if (count == 2)
        {
            for (i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    f=1;
                    no break;
                }
            }
            if (f==0)
            {
                yes
            }
            
        }
        else 
        {
            yes
        }
    }
    return 0;
}
