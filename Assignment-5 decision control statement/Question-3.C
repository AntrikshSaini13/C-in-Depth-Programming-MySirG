// write a program to check weather a given number is an even number or o an odd.
#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the any number = ");
    scanf("%d",&num1);
    if (num1 % 2 == 0)
    {
        printf("This is a odd number = %d",num1);
    }
    if (num1 % 3 == 0)
    {
        printf("This is a even number = %d",num1);
    }
    return 0;
}