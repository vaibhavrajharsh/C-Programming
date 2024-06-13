#include <stdio.h>

void factors(int n);

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    factors(n);

    return 0;
}
void factors(int n)
 {
    for(int x=2;x<=n;x++)
    {
      while (n % x == 0)
      {
        printf("%d ", x);
        n = n / x;
      }
    }
}