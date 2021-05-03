#include <stdio.h>


// nth power of a number
void main()
{
    printf("Lets calculate x^n\n\n");
    int x;
    printf("Enter value for x:");
    scanf("%d", &x);
    int n;
    printf("Enter value for n:");
    scanf("%d", &n);

    int power = 1;
    int i = 1;
    while (i <= n)
    {
        power = power * x;
        i++;
    }
    printf("%d ^ %d = %d\n", x, n, power);
}