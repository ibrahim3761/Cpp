#include<stdio.h>
void print_array(int a[2][3])
{
   
    int m=sizeof(a)/sizeof(a[0][0]);
    int n=sizeof(a[0])/sizeof(a[0][0]);
    
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        printf("%d\n",a[i][j]);
}
int main()
{
    int data[2][3]={{10,20,30},{40,50,60}};
       
    print_array(data);
    
    return 0;
}