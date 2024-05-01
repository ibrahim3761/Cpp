#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int p,count = 0,i,j;
    cin >> p;
    for ( i = 10; i >= 1; i--) 
    {
        int fact = 1;
        for ( j = 1; j <= i; j++) 
        {
            fact*=j;
        }
        int coins =p/fact;
        count+=coins;
        p%=fact;
    }
    cout << count << endl;
    return 0;
}