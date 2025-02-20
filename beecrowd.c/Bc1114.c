#include <stdio.h>
int main()
{
    int i,x,y;
    for ( i = 0;; i++)
    {
        scanf("%d",&w);
        if (w==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}