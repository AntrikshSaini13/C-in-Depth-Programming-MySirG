// Write a Program to print unit digit of a given number.
#include<stdio.h>
int main()
{
    int num1, Value;
    printf("Enter the any Integer Number = ");
    scanf("%d",&num1);

    Value = num1 % 10;
    printf("Unit Digit is = %d",Value);
    return 0;
}