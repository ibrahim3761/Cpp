#include<stdio.h>
int main()
{
    unsigned long long i,j,n,t,product;
    scanf("%llu",&n);
    for ( i = 0; i < n; i++)
    {
        product=1;
        scanf("%llu",&t);
        for ( j = 2; j <=t; j++)
        {
            product*=j;
        }
        printf("%llu\n",product);
    }
    return 0;
}