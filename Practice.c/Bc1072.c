#include <stdio.h>
int main(){
int n,x,i,in=0,out=0;
scanf("%d",&n);
for ( i = 0; i < n; i++)
{    
    scanf("%d",&x);
    if (10<=x && x<=20)
    {
        in++;
    }
    else{
        out++;
    }
}
printf("%d in\n",in);
printf("%d out\n",out);
return 0;
}
