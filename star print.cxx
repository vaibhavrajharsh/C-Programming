#include<stdio.h>
int main()
{
int n,j,i;
printf("Enter the height if the triangle",n);
scanf("%d",&n);
for(i=0;i<=n;i++)
    {
      for(j=1;j<i;j++)
      {
      printf("*");
    }
      printf("\n");
    }    
}