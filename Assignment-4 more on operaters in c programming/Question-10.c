// Whtat will be the value stored in variable x after excuting following statement.
// (x=3<0&&5>0) 
#include<stdio.h>
int main()
{
    int num1, num2,num3, result;
    num1 = 3;
    num2 = 0;
    num3 = 5;
    result = num1 < num2 && num3 > num2;
    printf("Result is 0 = %d",result);
    return 0;
}