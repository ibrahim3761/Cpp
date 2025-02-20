#include <stdio.h>
int main()
{
    int n,sum=0;
    for ( n = 5; n<=1000;n=n+5)
    {
        sum=sum+n;
    }
    printf("sum is:%d\n",sum);
    return 0;
}