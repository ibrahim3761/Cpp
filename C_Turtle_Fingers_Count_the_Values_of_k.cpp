#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;
        int count = 0;
        for (int x = 0; x <= 60; x++) {
            int temp = static_cast<int>(pow(a, x)) % b;
            if (temp == 0) {
                count += l / pow(a, x);
            } else {
                int y = 1;
                while (true) {
                    temp = (temp * a + 1) % b;
                    if (temp == 0) {
                        count += l / pow(a, x) / b * pow(a, x + 1);
                        break;
                    }
                    y++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}