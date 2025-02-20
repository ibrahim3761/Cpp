#include<stdio.h>
int main()
{
    double n=3.141592653, a,c;
    scanf("%lf",&a);
    c=n*a*a;
    printf("%0.13g",c);
    return 0;
}