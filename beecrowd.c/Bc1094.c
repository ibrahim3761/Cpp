#include <stdio.h>
int main()
{
    /*int n,i,l;
    char x;
    double a=0,b=0,d=0,total,m,t,q;
    scanf("%d",&l);
    for ( i = 1; i <= l; i++)
    {
        scanf("%d %c",&n,&x);
        if (x=='C')
        {
            a+=n;
        }
        else if (x== 'R')
        {
            b+=n;
        }
        else if (x=='S')
        {
            d+=n;
        }
    }
    total = a+b+d;
    printf("Total: %.0lf cobaias\n",total);
    printf("Total de coelhos: %.0lf\n",a);
    printf("Total de ratos: %.0lf\n",b);
    printf("Total de sapos: %lf.0\n",d);
    m=(a/total)*100;
    printf("Percentual de coelhos: %0.2lf %%\n",m);
    t=(b/total)*100;
    printf("Percentual de ratos: %0.2lf %%\n",t);
    q=(d/total)*100;
    printf("Percentual de sapos: %0.2lf %%\n",q);**/
    float i,j;
    int k;
    for ( i = 0; i <= 0; i+=0.2)
    {
        for ( j =1; j <= 3; j++)
        {
            printf("I=%0.0f J=%0.0f\n",i,j+i);
        }
        
    }
    for ( i = 0.2; i <=0.9; i+=0.2)
    {
        for ( j =1; j <= 3; j++)
        {
            printf("I=%0.1f J=%0.1f\n",i,j+i);
        }
        
    }
    for ( i = 1; i <= 1; i+=0.2)
    {
        for ( j =1; j <= 3; j++)
        {
            printf("I=%0.0f J=%0.0f\n",i,j+i);
        }
        
    }
    for ( i = 1.2; i <= 2; i+=0.2)
    {
        for ( j =1; j <= 3; j++)
        {
            printf("I=%0.1f J=%0.1f\n",i,j+i);
        }
        
    }
    for ( i = 2; i <= 2; i+=0.2)
    {
        for ( j =1; j <= 3; j++)
        {
            printf("I=%0.0f J=%0.0f\n",i,j+i);
        }
        
    }

    
    return 0;
}

/*10
10 C
6 R
15 S
5 C
14 R
9 C
6 R
8 S
5 C
14 R*/