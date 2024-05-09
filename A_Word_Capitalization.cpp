#include <iostream>
#define N 100005
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define ull unsigned long long
#define cint cin >> t;
using namespace std;

int main()
{
    int t = 1;
    // cint
    while (t--)
    {
        string word;
        cin >> word;
        
        if (islower(word[0]))
        {
            word[0] = toupper(word[0]);
        }

        cout << word << endl;
    }
    return 0;
}
