/*int main(){
    yemete kudaisa;
}*/
#include<bits/stdc++.h>
using namespace std;
#define yey cout<<"Yes"<<endl;
#define nada cout<<"No"<<endl;
#define ll long long
int main(){
    int n,i,j=1,b,c,d,e,x,y,f;
    cin>>n;
   int a[n];
    for(i=0;i<n;i++)
    {
        int fl=0;
        cin>>b;
        c=b/1000;
        d=(b/100)-(c*10);
        e=(b/10)-((c*100)+(d*10));
        f=b-((c*1000)+(d*100)+(e*10));
        if(c==0) 
        {
            c=10;
        }
        if(d==0)
        {
            d=10;
        }
        if(e==0)
        {
            e=10;
        }
        if(f==0)
        {
            f=10;
        }
        if(j==c) 
        {
            fl++;
        }
        else if(j!=c)
        {
            x=c-j;
            y=abs(x);
            fl+=y;
            fl++;
        }
        j=c;
        if(j==d) 
        {
            fl++;
        }
        else if(j!=d){
            x=d-j;
           y= abs(x);
            fl+=(y+1);
        }
        j=d;
         if(j==e) fl++;
        else if(j!=e)
        {
            x=e-j;
            y=abs(x);
            fl+=(y+1);
        }
        j=e;
        if(j==f) 
        {
            fl++;
        }
        else if(j!=f)
        {
            x=f-j;
            y=abs(x);
            fl+=(y+1);
        }
        cout<<fl<<endl;
        j=1;
    }
    return 0;
}