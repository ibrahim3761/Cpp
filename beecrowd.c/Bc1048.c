#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf",&a);
    if (0<=a && a<=400.00)
    {
        b=a+(a*0.15);
        printf("Novo salario: %0.2lf\n",b);
        printf("Reajuste ganho: %0.2lf\n",b-a);
        printf("Em percentual: 15 %%\n");
    }
    else if (400<a && a<=800)
    {
        b=a+(a*0.12);
        printf("Novo salario: %0.2lf\n",b);
        printf("Reajuste ganho: %0.2lf\n",b-a);
        printf("Em percentual: 12 %%\n");  
    }
    else if (800<a && a<=1200)
    {
        b=a+(a*0.1);
        printf("Novo salario: %0.2lf\n",b);
        printf("Reajuste ganho: %0.2lf\n",b-a);
        printf("Em percentual: 10 %%\n");  
    }
    else if (1200<a && a<=2000)
    {
        b=a+(a*0.07);
        printf("Novo salario: %0.2lf\n",b);
        printf("Reajuste ganho: %0.2lf\n",b-a);
        printf("Em percentual: 7 %%\n");  
    }
    else if (a>2000)
    {
        b=a+(a*0.04);
        printf("Novo salario: %0.2lf\n",b);
        printf("Reajuste ganho: %0.2lf\n",b-a);
        printf("Em percentual: 4 %%\n");  
    }
    
    return 0;
}