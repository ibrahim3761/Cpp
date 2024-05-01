#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    string s = "";
    if (b == 10 && a < 2)
    {
        s = "-1";
    }
    else if (b == 10 && a >= 2)
    {
        for (int i = 0; i < a - 1; i++)
        {
            s += '1';
        }
        s += '0';
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            s += (char)(b + '0');
        }
    }
    cout << s << endl;
    return 0;
}
