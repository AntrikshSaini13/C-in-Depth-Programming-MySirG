// Whtat will be the value stored in variable x after excuting following statement.
// (x=!2>2) 
#include<stdio.h>
int main()
{
    int num1, num2, result;
    num1 = 2;
    num2 = 2;

    result = !num1 > num2;

    printf("Result is 0 = %d",result);
    return 0;
}