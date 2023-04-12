// Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    float rupes_INR, rupes_USD;
    printf("Enter the Rupes in INR = ");
    scanf("%f",&rupes_INR);
    rupes_USD = rupes_INR / 84.23;
    printf("Convert into USD = %.2f$",rupes_USD);
    return 0;
} 