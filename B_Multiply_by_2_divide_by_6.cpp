#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,count =0;
        cin>> n;
        while (n>1){
            count ++;
            if(n%6==0){
                n/=6;
            }
            else if(n%3==0){
                n*=2;
            }
            else{
                count=-1;
                break;
            }
        }
        cout <<count<<endl;   
    }
    return 0;
}