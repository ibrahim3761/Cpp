#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while(q--)
    {
        int x;
        cin >> x;
        int start = 0;
        int end = n - 1;
        int f=0;
        while (start <= end)
        {
            int mid = (end + start) / 2;

            if (a[mid] == x)
            {
                f=1;
                break;
            }
            else if (a[mid] < x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        if(f==1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}