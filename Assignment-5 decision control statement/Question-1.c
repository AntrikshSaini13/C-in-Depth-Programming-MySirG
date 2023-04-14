// WAP to check weather a given number is positive or non-positive
#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the number is = ");
    scanf("%d",&num1);

    if (num1 > 0)
        printf("This number is Positive = %d",num1);
    else
        printf("This number is Non-Positive = %d",num1);
    return 0;
}