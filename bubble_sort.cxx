#include <stdio.h>
#include<conio.h>
int main()
{
    int a[20], n, i, j, temp;
    printf("Total number of Elements\n");
    scanf("%d", &n);
    //input elements
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //display elements
    printf("Elements of this Array Are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    //bubble sort
    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //print sorted array
    printf("\n\nSorted Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
   _getch();
    return 0;
}
