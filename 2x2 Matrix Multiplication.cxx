#include <stdio.h>
int main()
{
    int i, j, k, a[2][2], b[2][2], c[2][2];
    //Matrix1 Input
    printf("-------------------------------Input-------------------------------\n\n");
    printf("Enter the Elements of [2x2] MatA:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //Matrix2 Input
    printf("Enter the Elements of MatB:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
      printf("-------------------------------Input-------------------------------\n\n");
    //Display entered Matrix
    //MatA
    printf("MatA\n");
    for (i = 0; i < 2; i++)
    {
        printf("  [   ");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("   ]  ");
        printf("\n");
    }
    
    printf("\n");
        //MatB

   printf("MatB\n");
   for (i = 0; i < 2; i++)
   {
            printf("  [   ");
            for (j = 0; j < 2; j++)
            {
                printf("%d  ", b[i][j]);
            }
            printf("   ]  ");
            printf("\n");
   }
   //Matrix Multiplication Logic
   printf("\n");
   printf("------------------------------Output-------------------------------\n\n");

  for (i = 0; i < 2; i++)
   {
     for (j = 0; j < 2; j++)
      {
         c[i][j] = 0;
         for (k = 0; k < 2; k++)
           {
               c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
      }
   }
 //Result Print

        printf("Matix is\n");
        for (i = 0; i < 2; i++)
        {
            printf("[");
            for (j = 0; j < 2; j++)
            {
                printf("%d  ", c[i][j]);
            }
            printf("]");
            printf("\n");
        }
        return 0;
}
