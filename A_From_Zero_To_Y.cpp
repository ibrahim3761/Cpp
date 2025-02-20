/* Mohammad Ibrahim Abdullah*/
#include <bits/stdc++.h>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cint while (t--)
    {
        int x, y, count = 0, in;
        cin >> x >> y;
        in = x;

        if (y % x == 0)
        {
            while (x * 10 <= y)
            {
                x *= 10;
                count++;
            }
            if (x != y)
            {
                while (x == y)
                {
                    x += in;
                    count++;
                }
                cout << count << endl;
                ;
            }
        }
        else 
        {
            while (x * 10 <= y)
            {
                x *= 10;
                count++;
            }
            if (x != y)
            {
                
                while (x == y)
                {
                    x += in;
                    count++;
                }
                cout << count + 1 << endl;
            }
        }
    }

    return 0;
}