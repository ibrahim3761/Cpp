#include <bits/stdc++.h>
using namespace std;
void Tower_of_Hanoi(int n, char start, char ax, char end) // 3 A B C     2 A C B
{
    if (n == 1) // 1 A B C  1 C A B   1 B C A   1 A B C
    {
        cout << start << "->" << end << endl;
        return;
    }
    else
    {
        Tower_of_Hanoi(n - 1, start, end, ax); // 3 A B C   2 A C B     1 A B C  2 B A C->1 B C A
        cout << start << "->" << end << endl;
        Tower_of_Hanoi(n - 1, ax, start, end); // 2 A C B->1 C A B    3 A B C->2 B A C-> 1 A B C
        return;
    }
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Moves: " << pow(2, n) - 1 << endl;
    Tower_of_Hanoi(n, 'A', 'B', 'C'); 
    return 0;
}