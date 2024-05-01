#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    long long TOT=0;
    cin >> n>>m>>a;
    TOT=ceil(n/(double)a)*ceil(m/(double)a);
    cout << TOT <<endl;
    return 0;
}