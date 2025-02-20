#include<stdio.h>
int main()
{
    FILE * input_file;
    input_file = fopen("ibrahim.txt","r");
    char input[100];
    fgets(input, 100, input_file);
    puts(input);
    return 0;
}