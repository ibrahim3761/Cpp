#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for ( i = n; i <=n; i++)
    {
        for ( j = 1 ;j <= 12; j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}