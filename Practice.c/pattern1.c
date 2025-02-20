#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,m,x,c;
    char s[54];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%d",&s,&m);
            for(i=0;i<strlen(s);i++)
        {
           x=s[i]-m;
           if(x<65)
           {
               s[i]=91-65+x;
           }
           else s[i]=x;
        }
        printf("%s\n",s);

    }
    return 0;
}
