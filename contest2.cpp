#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define yo cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
//I am Ibrahim
//Yemete kudaisa

using namespace std;


int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    string x;
    cin >> x;

    int n = x.length();
    int k = 0;
    int max_val = 0;

    for (int i = n - 1; i >= 0; i--) {
      int digit = x[i] - '0';

      if (k == 0) {
        max_val = max(max_val, digit);
      } else {
        if (digit < 9) {
          max_val = max(max_val, digit + 1);
        } else {
          max_val = max(max_val, 0);
          k++;
        }
      }
    }

    cout << max_val << endl;
  }

  return 0;
}
