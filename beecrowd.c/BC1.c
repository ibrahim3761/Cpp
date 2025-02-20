#include<stdio.h>
int main ()
{
    double N;
    int a,b,c;
    scanf("%lf",&N);
    printf("NOTAS:\n");
    a=N/100;
    printf("%d nota(s) de R$ 100.00\n",a);
    N=N-(a*100);
    a=N/50;
    printf("%d nota(s) de R$ 50.00\n",a);
    N=N-(a*50);
    a=N/20;
    printf("%d nota(s) de R$ 20.00\n",a);
    N=N-(a*20);
    a=N/10;
    printf("%d nota(s) de R$ 10.00\n",a);
    N=N-(a*10);
    a=N/5;
    printf("%d nota(s) de R$ 5.00\n",a);
    N=N-(a*5);
    a=N/2;
    printf("%d nota(s) de R$ 2.00\n",a);
    printf("MOEDAS:\n");
    N=N-(a*2);
    a=N/1;
    printf("%d moeda(s) de R$ 1.00\n",a);
    N=N-(a*1);
    a=N/0.50;
    printf("%d moeda(s) de R$ 0.50\n",a);
    N=N-(a*0.50);
    a=N/0.25;
    printf("%d moeda(s) de R$ 0.25\n",a);
    N=N-(a*0.25);
    a=N/0.10;
    printf("%d moeda(s) de R$ 0.10\n",a);
    N=N-(a*0.10);
    a=N/0.05;
    printf("%d moeda(s) de R$ 0.05\n",a);
    N=N-(a*0.05);
    a=N/0.01;
    printf("%d moeda(s) de R$ 0.01\n",a);

    
    return 0;
}