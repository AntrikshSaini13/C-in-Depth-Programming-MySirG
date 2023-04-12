// Write a program to make the last digit of a number stored in a variable as zero.
// (Example if x=2345 then make it x=2340) 
#include<stdio.h>
int main()
{
    int num1, result, num2;
    printf("Enter the value of number");
    scanf("%d",&num1);
    num2 = num1 / 10;  
    printf("%d",num2);
    result = num2 * 10;
    printf(" Add the Zero in last of the number %d",result);
    return 0;
}