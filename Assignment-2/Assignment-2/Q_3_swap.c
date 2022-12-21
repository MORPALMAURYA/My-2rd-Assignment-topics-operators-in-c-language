// Q.3 write a program to print swap value of two int varible.

#include<stdio.h>
int main()
{
    int x=5,y=6,t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d",x,y);

    return 0;
}