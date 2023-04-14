// W A P to check weather a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year, result;
    printf("Enter the any year = " );
    scanf("%d",&year);

    result = year % 4;

    if(result == 0)
    {
        printf("This year is a leap = %d",year);
    }
    else
    {
        printf("This year isn't a leap = %d",year);
    }
    return 0;
}