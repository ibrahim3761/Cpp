#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    cin >> n;
    
    for (int i = 0; i < n + 2; i++)
    {
        if (s[i] != '.'){
            cout << (s[i] - '0');
        }
        else
        {
            cout<<".";
        }
    }
    
    cout << endl;
    return 0;
}
