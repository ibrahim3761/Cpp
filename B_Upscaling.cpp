#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {

                for (j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                }
                cout << endl;
                for (j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                }
                cout << endl;
            }
            else
            {
                for (j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                    {
                        cout << "..";
                    }
                    else
                    {
                        cout << "##";
                    }
                }
                cout << endl;
                for (j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                    {
                        cout << "..";
                    }
                    else
                    {
                        cout << "##";
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}