// Write a program to take a three digit  number from the user and rotate its digits by one postion towards the right.
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the three digit number\n");
    scanf("%d",&num1);
    num2 = num1 % 10 * 100 + num1 / 10;
    printf("Toward the right %d",num2);
    return 0;
}