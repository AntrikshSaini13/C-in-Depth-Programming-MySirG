// Write a Program to swap value of two int variable in single line  using arthmatic  opterator.
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter any two number  \n");
    scanf("%d %d",&num1,&num2);
    printf("Without swaping number is = %d %d\n",num1,num2);
    //method-1 swap two number
    num2 = (num1+num2)-(num1=num2);
    printf("With swaping number is = %d %d\n",num1,num2);
    //method-2 swap two number
    num2 = (num1*num2)/(num1=num2);
    printf("With swaping number is = %d %d\n",num1,num2);
    return 0;
}