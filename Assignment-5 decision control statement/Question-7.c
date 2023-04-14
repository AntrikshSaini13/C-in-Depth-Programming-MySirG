// WAP to print greater b/n two numbers.Print one number if both are the same
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the two number = ");
    scanf("%d %d",&num1, &num2);

    // Apply here Conditional statement
    if (num1 > num2)
    {
        printf("This number is greater = %d", num1);
    }
    else if (num2 > num1)
    {
        printf("This number is greater = %d", num2);
    }
    else if (num1 == num2)
    {
        printf("This number 1 and number 2 are both same  = %d", num1);
    }
    else
    {
        printf("Sorry Enter other number");
    }
    return 0;
}