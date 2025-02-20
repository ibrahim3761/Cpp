#include <stdio.h>
int square(int x)
{
    int y;
    y=x*x;
    return y;
}
int main()
{
    int a,sq;
    printf("Enter the digit:\n");
    scanf("%d",&a);
    sq=square(a);
    printf("The square of %d is :%d",a,sq);
    return 0;
}