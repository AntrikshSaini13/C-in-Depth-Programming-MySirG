// WAP to check weather a given number is divisible by 5 or not.
#include<stdio.h>
int main()
{
    int num1, div;
    printf("Enter any number is = ");
    scanf("%d",num1);
    if (num1 % 5 == 0)
        printf("its a divisiable by 5");
    else
        printf("its not divisiable by 5");
    return 0;
}