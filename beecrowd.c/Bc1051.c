#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf",&a);
    if (0<=a && a<=2000.00 )
    {
        printf("Isento\n");
    }
    else if (2000.00<a && a<=3000.00)
    {
        b=(a-2000)*0.08;
        printf("%0.2lf\n",b);
    }
    else if (3000.00<a && a<=4500.00)
    {
        b=(a-3000)*0.18+1000.00*0.08;
        printf("%0.2lf\n",b);
    }
    else
    {
        b=(a-4500)*0.28+1500.00*0.18+1000.00*0.08;
        printf("%0.2lf\n",b); 
    }
    
    return 0;
    
}