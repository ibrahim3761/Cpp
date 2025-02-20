#include<stdio.h>
int main()
{
    int i,j,y;
    double k,x,avg,sum=0,counter=0;
    for(k=1;; k++)
    {
        for(i=1;; i++)
        {
            scanf("%lf",&x);
            if(x<0 || x>10)
            {
                printf("nota invalida\n");
            }
            else
            {
                counter+=1;
                sum+=x;
            }
            if(counter==2)
            {
                printf("media = %.2lf\n",sum/=2.0);
                sum=0;
                counter=0;
                break;
            }
        }
        for(j=1;; j++)
        {
            scanf("%d",&y);
            printf("novo calculo (1-sim 2-nao)\n");
            if(y==1 || y==2)
            {
                break;
            }
        }
        if (y==1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}