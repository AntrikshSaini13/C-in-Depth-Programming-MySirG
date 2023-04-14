// WAP to find the greatest among three given numbers. Print number once if the greatest number appears two or three times
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three number \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1>num2 && num1>num2)
    {
        printf("The number 1 is greater than number(2,3) = %d",num1);
    }
    if (num2>num1 && num2>num3)
    {
        printf("The number 2 is greater than number(1,3) = %d",num2);
    }
    if (num3>num1 && num3>num2)
    {
        printf("The number 3 is greater than number(1,2) = %d",num3);
    }
    return 0;
}