// Write a Program to  print given number without  last digit.
#include<stdio.h>
int main()
{
    int num1, Value;
    printf("Enter the any Integer Number = ");
    scanf("%d",&num1);

    Value=num1/10;
    printf("Without  last digit Number = %d",Value);
    return 0;
}