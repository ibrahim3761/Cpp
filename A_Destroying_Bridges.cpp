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
        int n, k;
        cin>>n>>k;
        if (k>=n-1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
    return 0;
}
