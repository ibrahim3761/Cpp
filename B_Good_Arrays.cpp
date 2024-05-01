#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        long long sum = 0, count = 0;

        for(int i = 0; i < n; i++){
            sum += v[i];
            if(v[i] == 1){
                count++;
            }
        }
        if(sum >= count + n && n > 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}