// Write a program to draw  the shape  following pattern
// *
// **
// ***
// ****
// *****

#include<stdio.h>
int main()
{
    int i, j, num;
    printf("Enter the number = ");
    scanf("%d",&num);
    for (i=1 ; i<=num ; i++)
    {
        for (j=1 ; j<=num; j++)
        {
            if(j<=i)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}