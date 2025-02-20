#include<stdio.h>
int main()
{
    int i,x,y;
    for ( i = 0;; i++)
    {
        scanf("%d %d",&x,&y);
        if (x>y)
        {
            printf("Decrescente\n");
        }
        else if (x<y)
        {
            printf("Crescente\n");
        }
        else if (x==y)
        {
            break;
        }
    }
    return 0;
}