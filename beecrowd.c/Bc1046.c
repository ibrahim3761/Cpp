#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,totalsm,totalem,duration;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    totalsm=(h1*60)+m1;
    totalem=(h2*60)+m2;
    if (totalem>totalsm )
    {
        duration=totalem-totalsm;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration/60,duration%60);
    }
     else {
        
       duration=24*60+(totalem-totalsm);
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration/60,duration%60);
  }
    return 0;
}
