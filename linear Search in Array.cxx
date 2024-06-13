#include<stdio.h>
int main()
{
    int i,n,a[5];
    printf("Insert the values of the Array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of the Array are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the Number to Search:\n n=");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            printf("Record found at %d position\n",i+1);
        }
        else
        {
            printf("Record not Found\n");
        }
    }
        return 0;
}