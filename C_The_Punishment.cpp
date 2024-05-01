#include <iostream>
using namespace std;

int main() {
    int n,sum=0,i=1;
    cin >> n;
    while (sum < n) {
        sum += i;
        i++;
    }
    if (sum == n) 
    {
        cout << "YES" << endl;
    } 
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
