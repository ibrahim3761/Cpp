#include<stdio.h>

int main()
{
    int s,t,f,tm;
    scanf("%d %d %d",&s,&t,&f);
    tm = s+t+f;
    if(tm>24){
        tm=tm-24;
        printf("%d\n",tm);}
    else if(tm<0){
        tm=tm+24;
        printf("%d\n",tm);}
    else{ 
        printf("%d\n",tm);}
    return 0;
}
