#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n ;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >>v[i];
    }
    
    int result=v[0];
    for (int i = 1; i < n; i++)
    {
        result=__gcd(result,v[i]);
    }
    cout<<result<<endl;
}
