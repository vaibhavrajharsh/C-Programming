#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    (a>b)?(a>b?printf("a is greater"):printf("c is greater")):(b>c)?printf("b is greater"):printf("cis greater");
}