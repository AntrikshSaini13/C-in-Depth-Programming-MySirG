// W A P to check weather roots of a given quadric equations are real & distinct, real & equal  or imaginary roots.
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    float result;
    printf("Enter the Three number = ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = num2*num2 - 4*num1*num3;
    if(result > 0)
    {
        printf("In this case, Real and distinct roots = %.2f",result);
    }
    else if (result == 0)
    {
        /* code */
        printf("In this case, Real and equal roots = %.2f",result);
    }
    else if (result < 0)
    {
        /* code */
        printf("In this case, imaginary roots = %.2f",result);
    }
    else
    {
        printf("Sorry Enter other number");
    }
    return 0;
}
