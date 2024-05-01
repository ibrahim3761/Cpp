#include <bits/stdc++.h>
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
using namespace std;
int main() 
{
    long long N;
    cin >> N;
    while (N % 2 == 0) {
        N /= 2;
        
    }
    while (N % 3 == 0) {
        N /= 3;
        
    }
    if (N == 1) 
    {
        yes
    } 
    else 
    {
        no
    }
    return 0;
}