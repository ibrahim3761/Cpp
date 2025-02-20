#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
    if (i%2==0)
    {
        printf("%d\n",i);
        j++;
    }
    }
    if (j==0)
    {
        printf("-1\n");
    }
    return 0;
}