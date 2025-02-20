 
{
    float maths[5]={100,96.5,95.4,90,82};
    int i;
    for ( i = 1; i <= 5; i++)
    {
        printf("Roll %d got: %0.1f marks in math\n",i,maths[i-1]);
    }
    return 0;
}