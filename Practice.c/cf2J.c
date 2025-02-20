#include<stdio.h>
int main()
{
    int i,n,j,count;
    scanf("%d",&n);
    printf("2");
    for(j=3;j<=n;j++)
    {
        count=0;
        
        for ( i = 2; i < j; i++)
        {
            if (j%i==0)
            {
                count++;
            }
        }
        if (count==0)
        {
            printf(" %d",j);
        }
    }
    printf("\n");
    return 0;
}