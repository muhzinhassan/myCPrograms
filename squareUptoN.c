#include <stdio.h>

// square upto n numbers;

void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        int square = i * i;
        printf("%d ^2 = %d \n", i, square);
        i++;
    }
}