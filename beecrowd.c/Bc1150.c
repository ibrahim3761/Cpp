#include<stdio.h>
int main()
{
    int i,x,y,sum=0,count=0;
    scanf("%d%d",&x,&y);
    while (y<=x)
    {
        scanf("%d",&y);
    }
    for ( i = x;; i++)
    {   
        sum+=i;
        count++;
        if (sum>=y)
        {
        break;
        }
    }
    printf("%d\n",count);
    return 0;
}