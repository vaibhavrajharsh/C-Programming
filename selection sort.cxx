#include<stdio.h>

int main() {
    int a[20], n, i, j, temp;
    
    // Length input
    printf("Enter the Length of Array\n");
    scanf("%d", &n);
    
    // Elements input
    printf("Enter the Elements of the Array\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Print values
    printf("Values Are\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    
    // Selection sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    // Printing sorted values
    printf("\nSorted Array\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    
    return 0;
}