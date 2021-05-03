#include <stdio.h>

// factorial of a number (recursion)

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

void main()
{

    int n;
    printf("Enter value for n:");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));

    int i = 1;
    int factorial = 1;
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("%d! = %d\n", n, factorial);
}

// 5 * fact(4);
//      4 * fact(3);
//            3 * fact(2);
//                    2 * fact(1);
//                          1