#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        
        int initial_gcd = gcd(X, Y);
        int initial_lcm = lcm(X, Y);
        
        if (K % 2 == 0) {
            // If K is even, the minimum sum remains the same as the initial sum.
            cout << X + Y << endl;
        } else {
            // If K is odd, we can reduce it to an even number of operations.
            // Replace one number with the gcd, and the other with the initial_lcm.
            cout << initial_gcd + (X / initial_gcd) * initial_lcm << endl;
        }
    }
    
    return 0;
}
