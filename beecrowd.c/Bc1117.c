#include<stdio.h>
int main()
{
    int i;
    double x,sum=0,avg=0;
    for ( i = 0; i < 2;)
    {
        scanf("%lf",&x);
        if (x<0 || x>10 )
        {
            printf("nota invalida\n");
        }
        else{
            sum+=x;  
            i++;
        }
    }
    avg = sum/2.0;
    printf("media = %0.2lf\n",avg);
    return 0;
}