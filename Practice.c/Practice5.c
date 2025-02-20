#include <stdint-gcc.h>
int main()
{
    float f;
    double d;
    printf("Please enter the double number:\n");
    scanf("%lf", &d);
    printf("The double number is:%.2lf\n", d);
    return 0; 
}