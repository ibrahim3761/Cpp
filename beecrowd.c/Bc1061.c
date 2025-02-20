#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,td,th,tm,ts;
    scanf("%d%d%d%d%d%d%d%d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);
    td=d2-d1;
    th=h2-h1;
    tm=m2-m1;
    ts=s2-s1;
    if(ts<0)
    {
        ts+=60;
        tm-=1;
    }
    if(tm<0)
    {
        tm+=60;
        th-=1;
    }
    if(th<0)
    {
        th+=24;
        td-=1;
    }
    printf("%d dia(s)\n",td);
    printf("%d hora(s)\n",th);
    printf("%d minuto(s)\n",tm);
    printf("%d segundo(s)\n",ts);
    
    return 0;

}