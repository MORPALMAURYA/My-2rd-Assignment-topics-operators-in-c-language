/* Q.10  write a program to print a number from the user and also input a digit .
Appent a number digit in the number and print the resulting number */

#include<stdio.h>
int main()
{
    int x=123, y=9;

    x=x*10;
    x=x+y;
    
    printf("%d",x);
    return 0;
}