#include <stdio.h>

int main()
{
    int a, i, j, k;

    scanf("%d", &a);

    for(i=1; i<=a; i++)
    {
        for(j=i; j<a; j++)
        {
            printf("  ");
        }
            for(k=1; k<=i; k++)
            {
                if (j!=1 && i!=a && k>1 && k<i)
                {
                    printf("  ");
                }
                else{
                    printf("* ");
                }
            }
        printf("\n");
    }
    return 0;
}
