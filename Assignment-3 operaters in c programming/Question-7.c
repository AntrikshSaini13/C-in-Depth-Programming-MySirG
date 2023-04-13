// Write a Program to swap value of two int variable without using athird variable.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter any two number  \n");
    scanf("%d %d",&num1,&num2);
    printf("Without swaping number is = %d %d\n",num1,num2);
    // swap the two number 
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    // second method is swaping
    // num1 = num1 + num2;
    // num2 = num1 - num2;
    // num1 = num1 - num2;
    
    printf("With swaping number is = %d %d\n",num1,num2);
    return 0;
}