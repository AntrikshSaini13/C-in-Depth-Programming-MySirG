// Write a program to draw  the shape  following pattern
// ABCDE
//  ABCD
//   ABC
//    AB
//     A

#include<stdio.h>
int main()
{
    int i, j, num, char1 = 65;
    printf("Enter the number = ");
    scanf("%d",&num);
    for (i=num ; i>=1 ; i--)
    {
        for (j=0 ; j<=num-1 ; j++)
        {
            if(j<=i)
            {
                printf("%c",char1+j);
            }   
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}