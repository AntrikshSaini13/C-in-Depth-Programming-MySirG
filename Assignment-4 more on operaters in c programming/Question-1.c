// Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main ()
{
    int var1, var2, num1, num2, num3, sum;
    printf("Enter the three Digit number = ");
    scanf("%d",&var1);

    // first method 
    var2 = var1 % 100;
    num1 = var1 / 100;
    num2 = var2 / 10;
    num3 = var2 % 10;

    printf("Digit one is %d\nDigit second is %d\nDigit third is %d\n",num1,num2,num3);
    sum = num1 + num2 + num3;

    // second method 
    // sum = var1/100 + var1/10%10 + var1%10;

    printf("Sum of three digit is = %d",sum);
    return 0;
}