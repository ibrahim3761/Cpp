#include<stdio.h>
int main()
{
    int i,x,al=0,ga=0,di=0;
    for ( i = 0;; i++)
    {
        scanf("%d",&x);
        if (x==1)
        {
            al++;
        }
        else if (x==2)
        {
            ga++;
        }
        else if (x==3)
        {
            di++;
        }
        else if (x==4)
        {
            break;
        }
        else if (x<1|| x>4)
        {
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",ga);
    printf("Diesel: %d\n",di);
    return 0;
}