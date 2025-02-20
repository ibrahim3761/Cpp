#include<stdio.h>
int main()
{
    int i, n[20];
    for ( i = 19; i >= 0; i--)
    {
        scanf("%d",&n[i]);
    }
    for ( i = 0; i < 20; i++)
    {
        printf("n[%d] = %d\n",i,n[i]);
    }
    return 0;
}