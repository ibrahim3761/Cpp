#include<stdio.h>
int main()
{
     long long a[61],b=0,c=1,d=0;
    int i,n,t;
    a[0]=0;
    a[1]=1;
    for ( i = 2; i < 61; i++)
    {

        d=b+c;
        b=c;
        c=d;
        a[i]=d;
    }
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t);
        printf("Fib(%d) = %lld\n",t, a[t]);
    }
    return 0;
}