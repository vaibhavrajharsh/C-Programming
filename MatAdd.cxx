#include<stdio.h>
int main()
{
	int r,c,i,j,a[100][100],b[100][100],sum[100][100];
	printf("Enter the Number of Rows (between 1 to 100)\n");
	scanf("%d",&r);
	printf("Enter the Number of Columns (between 1 to 100)\n");
	scanf("%d",&c);
	//input
	printf("Enter the Elements of First Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d] x a[%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Elements of second Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d] x a[%d] = ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	//print 
	printf("Your Matrices are\n");
	printf("MatA\n");
	for(i=0;i<r;i++)
	{
		printf("[ ");
		for(j=0;j<c;j++)
		{
		
			printf("%d ",a[i][j]);
		}
		printf(" ]\n");
	}
	printf("MatB\n");
		for(i=0;i<r;i++)
	{
		printf("[ ");
		for(j=0;j<c;j++)
		{
		
			printf("%d ",b[i][j]);
		}
		printf(" ]\n");
	}
	//matrix addition
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		sum[i][j]=a[i][j]+b[i][j];
		}
	}
	//display
	printf("Sum of your matrix is\n");
	for(i=0;i<r;i++)
	{
		printf("[ ");
		for(j=0;j<c;j++)
		{
		
			printf("%d ",sum[i][j]);
		}
		printf(" ]\n");
	}
	return 0;	
}