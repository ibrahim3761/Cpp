#include <stdio.h>
int main()
{
    int x;
    printf("Enter a digit:\n");
    scanf("%d",&x);
    if (x>20)
    {
        printf("%d is greater than 20\n", x);
    }
    else if (x>10)
    {
        printf("%d is greater than 10\n",x);
    }
    return 0;
}
