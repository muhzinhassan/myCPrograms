#include <stdio.h>

// multiplication table
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int i = 1;
    while (i <= 15)
    {
        int product = i * n;
        printf("%d X %d = %d \n", i, n, product);
        i++;
    }
}