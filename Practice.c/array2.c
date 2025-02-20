/*#include <stdio.h>
#include <string.h>

int main() {
    int n, i, l;

    scanf("%d", &n);
    while (n--) {
        char name[43];
        scanf("%s", name);
        l = strlen(name);
        int count = 0, d = 0;
        for (i = 0; i < l; i++) {
            if (name[i] != 'A' && name[i] != 'E' && name[i] != 'I' && name[i] != 'O' && name[i] != 'U' &&
                name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u') {
                count++;
                if (count >= 3) {
                    d = 1;
                    break;
                }
            } else {
                count = 0;
            }
        }
        if (d == 0) {
            printf("%s eh facil\n", name);
        } else {
            printf("%s nao eh facil\n", name);
        }
    }
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x,n,sum=0;
    char ch[100];
    scanf("%d",&n);
    int count1 = 2; //for 1
    int count2 = 5; // for 2,3,5
    int count3 = 4; // for 4
    int count4 = 6; // for 6,9,0
    int count5 = 3; // for 7
    int count6= 7;  // for 8
    for(i=1;i<=n;i++)
    {
        scanf("%s",ch);
        x=strlen(ch);
        sum=0;
        for(j=0;j<x;j++)
        {
            if(ch[j]== '1'){
                sum += count1;
            }
            else if(ch[j]=='2' || ch[j]=='3' || ch[j]=='5'){
                sum += count2;
            }
            else if(ch[j]=='4'){
                sum += count3;
            }
            else if(ch[j]=='6' || ch[j]=='9' || ch[j]=='0'){
                sum += count4;
            }
            else if(ch[j]=='7'){
                sum += count5;
            }
            else if(ch[j]=='8')
            sum += count6;


        }
        printf("%d leds\n",sum);

    }

    return 0;
}
