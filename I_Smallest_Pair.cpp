#include <iostream>
#include <climits>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
 
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int msum = INT_MAX;
 
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int sum = A[i] + A[j] + j - i;
                if (sum < msum)
                    msum = sum;
            }
        }
 
        cout << msum << endl;
    }
    return 0;
}
 