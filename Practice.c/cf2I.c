#include<stdio.h>
int main() {
  int a,b,c,d=0;
  scanf("%d",&a);
  b=a;
  while (b!=0)
  {
    c=b%10;
    d= (d*10)+c;
    b=b/10;
  }
  if(d==a){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
  
}