// WAP to calculate the N number of factorial.
#include<stdio.h>
int main()
{
    int i=1, factorial=1, num;
    printf("Enter the number = ");
    scanf("%d",&num);
    while (i<=num)
    {
        // cubes = i * i * i;
        printf("%d ",i);
        factorial=factorial*i;   
        i++;
    }
    printf("\nThe sum of  fist N natural number's factorial =  %d ",factorial);
    return 0;
}
