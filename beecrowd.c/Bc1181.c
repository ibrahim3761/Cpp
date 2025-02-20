#include<stdio.h>
int main()
{
    int l,i,j;
    double m[12][12],sum=0;
    char a;
    scanf("%d %c",&l,&a);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&m[i][j]);
            if(i==l)
            {
                sum+=m[i][j];
            }
        }
    }    
    if(a=='S')
    {
        printf("%.1lf\n",sum);
    }    
    else{
        printf("%.1lf\n",sum/12);
    } 
    return 0;   
}