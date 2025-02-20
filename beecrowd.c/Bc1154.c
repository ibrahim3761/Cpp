#include<stdio.h>
int main(){
    int i,x,sum=0,count=0;
    double avg;
    for ( i = 0;; i++)
    {
        scanf("%d",&x);
        if (x<0)
        {
            break;
        }
        else{
            sum+=x;
            count+=1;
        }
    }
    avg= (double) sum/count;
    printf("%0.2lf\n",avg);
    return 0;
}