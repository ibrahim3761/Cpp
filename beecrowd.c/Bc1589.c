#include<stdio.h>
int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",x+y);
    }
    return 0;
}