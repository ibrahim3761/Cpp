#include<stdio.h>
int main()
{
    int i,n,j;
    for ( i = 1;; i++)
    {
        scanf("%d",&j);
        if (j==1999)
        {
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    printf("Correct\n");
}