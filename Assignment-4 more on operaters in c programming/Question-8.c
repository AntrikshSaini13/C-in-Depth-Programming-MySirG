// Whtat will be the value stored in variable x after excuting following statement.
// (x=10>8>4) 
#include<stdio.h>
int main()
{
    int num1, num2, num3, result;
    num1 = 10;
    num2 = 8;
    num3 = 4;

    result = num1 > num2 > num3;

    printf("Result is zero = %d",result);
    return 0;
}