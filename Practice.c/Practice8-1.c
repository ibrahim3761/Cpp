#include<stdio.h>
int minimum(int a, int b)
{
    int temp;
    if (a<b)
    {
        temp=a;
    }
    else{
        temp=b;
    }    
    return temp;
}
int main()
{
    int a,b,c,t1,smaller;
    printf("Enter the digits:\n");
    scanf("%d%d%d",&a,&b,&c);
    t1= minimum(a,b);
    smaller=minimum(t1,c);
    printf("The smaller numer is:%d",smaller);
    return 0;
}