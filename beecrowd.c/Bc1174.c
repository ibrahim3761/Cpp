#include<stdio.h>
int main()
{
    int i;
    double a[100];
    for ( i = 0; i < 100; i++)
    {
        scanf("%lf",&a[i]);
        if (a[i]<=10)
        {
            printf("A[%d] = %0.1lf\n",i,a[i]);
        }
        
    }
    return 0;
}