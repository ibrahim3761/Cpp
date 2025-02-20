#include <stdio.h>

int main()
{
    int i,x,y;
    scanf("%d%d",&x,&y);
    for (i=1;i<=y;i++)
    {
        printf("%d",i);
        if (i%x== 0)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}