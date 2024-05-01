#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;
   long long int c,d;
    cin>>a;
    c=a;
    if(c%10==9) cout<<"GOTO Vasilisa."<<endl;
    else{
        b=a*10;
        d=b;
        if(d%10>=5) cout<<ceil(a)<<endl;
        else cout<<floor(a)<<endl;
    }
    return 0;
}