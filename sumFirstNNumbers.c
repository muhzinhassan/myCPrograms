#include <stdio.h>


// sum of first N numbers
void main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d numbers is : %d \n",n,sum);
    
}