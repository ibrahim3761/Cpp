#include<stdio.h>
int main()
{
    int i,j,a[1000],n;
    scanf("%d",&n);

    for ( j = 0; j < n; j++)
    {
        a[j]=j;
    }

    j=0;
    for ( i = 0; i < 1000; i++)
    {

        printf("N[%d] = %d\n", i,a[j]);
        j++;
        if(j==n) j=0;
    }
    return 0;
}