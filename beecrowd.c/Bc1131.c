#include<stdio.h>
int main()
{
    int ig,gg,iw=0,gw=0,em=0,i,x,grenais=0;
    for ( i = 0;; i++)
    {
        scanf("%d %d",&ig,&gg);
        grenais++;
        if (ig>gg)
        {
            iw++;
        }
        else if (ig<gg)
        {
            gw++;
        }
        else{
            em++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&x);
        if (x==1)
        {
            continue;
        }
        else if (x==2)
        {
            break;
        }
    }
    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",iw);
    printf("Gremio:%d\n",gw);
    printf("Empates:%d\n",em);
    if (iw>gw)
    {
        printf("Inter venceu mais\n");
    }
    else if (gw>iw)
    {    
        printf("Gremio venceu mais\n");
    }
    else if (iw == gw)
    {
        printf("Nao houve vencedor\n");
    }
    return 0;
}