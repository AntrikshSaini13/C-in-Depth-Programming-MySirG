// Write a program with one char type varaiable. assign "A" in the variable. Now change the value of variable from "A" to "B" using increment operater.
#include<stdio.h>
int main()
{
    char char1;
    printf("Enter the any character of Keboard = ");
    scanf("%c",&char1);

    // Apple here pre-increment these are giving next value of character 
    ++char1;

    printf("Next Word is = %c",char1);
    return 0;
}