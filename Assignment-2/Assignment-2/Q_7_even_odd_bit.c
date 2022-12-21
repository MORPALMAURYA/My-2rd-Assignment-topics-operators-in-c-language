/*Q.8 write a program to chack whether the given number is even or using 
a bitwise operator */

#include<stdio.h>
int main()
{
    int x;
    printf("enetr a number \n");
    scanf("%d",&x);

    (x & 1)? printf("odd"):printf("even");
     return 0;
}