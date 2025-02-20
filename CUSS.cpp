// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, count = 0,ans=INT32_MAX,x, i, j, k;
//     cin >> n;
//     vector<int> a(n);
//     for (i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//     }
//     for ( j = -1000; j <=1000 ; j++)
//     {
//         x=j;
//         count=0;
//         for ( i = 0; i < n; i++)
//         {
//             k= abs(a[i]-x);
//             count+=(k/7);
//             k%=7;
//             count+=(k/3);
//             k%=3;
//             count+=(k/1);
//             k%=1;
//         }
//         ans=min(ans,count);
//     }
//     cout << ans << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, i, j, k;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 2; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (a[j] % a[i] == 0 && a[k] % a[i] == 0)
                {
                    if (a[k] % a[j] != 0)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}