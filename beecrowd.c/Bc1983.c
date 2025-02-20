#include<stdio.h>
int main()
{
    int n,i,x,j=0;
    float y,k=0.0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d %f",&x,&y);
        if (y>=8.0 && y>k)
        {
            j=x;
            k=y;    
        }
    }
    if (j==0)
    {
        printf("Minimum note not reached\n");
    }
    else{
        printf("%d\n",j);
    }
    return 0;
}