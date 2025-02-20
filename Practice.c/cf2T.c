#include <stdio.h>
 
int main()
{
    int a, i, j, k, l;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        for(j=i; j<a; j++)
        {
            printf(" ");
        }
            for(k=1; k <= i; k++)
            {
               printf("*");
            }
                for(l = 2; l <= i; l++)
            {
               printf("*");
            }
        printf("\n");
    }
    return 0;
}