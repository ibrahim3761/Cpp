#include<stdio.h>
int main()
{
    int x, y, z=0, i, sum = 0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d", &x, &y);
        if(y < x)
        {
            z=x;
            x=y;
            y=z;
        }
        sum = 0;
        for(i = x+1; i < y; i++)
        {
            if (i%2!=0)
            {
                sum = sum + i;
            }    
        }
        printf("%d\n", sum);
    }
}