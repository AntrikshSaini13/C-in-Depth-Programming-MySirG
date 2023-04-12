// Write a program to print size of an int a float a char and a double type variable.
#include<stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;
    printf("the size of int is %d\n",sizeof(b));
    printf("the size of float is %d\n",sizeof(c));
    printf("the size of double is %d\n",sizeof(d));
    printf("the size of char is %d\n",sizeof(a));
    return 0;
}