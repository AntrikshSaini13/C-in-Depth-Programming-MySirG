// Write a Program to swap value of two int variable
#include<stdio.h>
int main()
{
    int num1, num2, tamp;
    printf("Enter any two number  \n");
    scanf("%d %d",&num1,&num2);
    printf("Without swaping number is = %d %d\n",num1,num2);
    tamp=num1;
    num1=num2;
    num2=tamp;
    printf("With swaping number is = %d %d\n",num1,num2);
    
}