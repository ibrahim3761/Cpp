#include <stdio.h>
int main() 
{
    int n, x, i, j, sum=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        for (j = 1; j < x; j++)
        {
            if (x % j == 0)
            {
                sum += j;
            }
        }
        if (sum == x) 
        {
            printf("%d eh perfeito\n", x);
        } else 
        {
            printf("%d nao eh perfeito\n", x);
        }
        sum=0;
    }
    return 0;
}
