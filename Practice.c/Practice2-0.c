#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of x and then y\n");
    scanf("%d%d", &x, &y);
    z = x + y;
    printf("The value of z is %d+%d=%d\n", x, y, z);
    return 0;
}