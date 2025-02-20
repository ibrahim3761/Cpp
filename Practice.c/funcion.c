#include<stdio.h>

/*double area (double b, double h){
    return 0.5*b*h;
}

void sub(int a , int b){
    printf("The sub is : %d\n",a-b);
}

void calcpow(double base ,double exp){
    double result=1,i;
    for ( i = 1; i <= exp; i++)
    {
        result=result*base;
       
    }
    printf("Result = %0.1lf\n",result);
    
}

int max(int x[]){

    int max=x[0];

    for ( int i = 0; i < 5; i++)
    {
        if (max<x[i])
        {
            max= x[i];
        }
    }
    return max;
}*/

void display(char s1[]){
    int i=0;
    while (s1[i] !='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
    
}

int main()
{
    char str[] = "Ibrahim";
    display(str);
}
