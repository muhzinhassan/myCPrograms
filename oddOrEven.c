#include <stdio.h>

// void main()
// {
//     int x = 10;
//     if (x % 2 == 0)
//     {
//         printf("%d is Even \n", x);
//     }
//     else
//     {
//         printf("%d is Odd \n", x);
//     }
// }

void main()
{
    int x;
    printf("Please Enter a number:");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("\n%d is Even \n", x);
    }
    else
    {
        printf("\n%d is Odd \n", x);
    }
}

// void main()
// {
//     int x;
//     printf("Please Enter a number:");
//     scanf("%d", &x);
//     char *result = "";                      // to store string values
//     result = (x % 2 == 0) ? "Even" : "Odd"; // ternary/conditional operator
//     printf("\n %d is %s\n", x, result);
// }

// void main()
// {
//     int x;
//     printf("Please Enter a number:");
//     scanf("%d", &x);
//     char *result = "";
//     result = (x & 1 == 1) ? "Odd" : "Even";
//     printf("\n %d is %s\n", x, result);
// }

// int main()
// {
//     int x;
//     printf("Please Enter a number:");
//     scanf("%d", &x);
//     char *result = "";
//     result = (x & 1 == 1) ? "Odd" : "Even"; // using bitwise operator
//     printf("\n %d is %s\n", x, result);
//     return 0;
// }

/** void main() fails
 *  int main(){
 * 
 *  return 0;
 * }
 * 
 **/

// to run in linux
// gcc oddOrEven.c
// ./a.out