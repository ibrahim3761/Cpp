#include<stdio.h>
int main()
{
    int i,n,t,x=21,y=0;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",&t);
        if (t<x)
        {
            y=i;
            x=t;
        }
    }
    printf("%d",y);
    return 0;
}