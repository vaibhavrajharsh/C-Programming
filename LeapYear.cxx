#include<stdio.h>
int leap(int year);
int main()
{
    int year;
    printf("Enter any Year\n");
    scanf("%d",&year);
    
    leap(year);
    return 0;
}
int leap(int year)
{
    if(year%4==0)
    {
        printf("This is a Leap Year");
    }
    else
    {
        printf("This is not a Leap Year");
    }
}