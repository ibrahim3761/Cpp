#include<stdio.h> 
int main() 
{ 
    int A,B,C,D; 
    scanf("%d%d%d%d",&A,&B,&C,&D); 
    A=A%100; 
    B=B%100; 
    C=C%100; 
    D=D%100; 
    int a=A*B*C*D; 
    while(a>=100) 
    { 
        a=a%100; 
    } 
    printf("%02d\n",a); 
    return 0; 
}