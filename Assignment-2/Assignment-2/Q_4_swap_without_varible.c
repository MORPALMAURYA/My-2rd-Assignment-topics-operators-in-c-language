//Q.4 write a program to swap value of two int varible without using a third varible .


#include<stdio.h>
int main()
{
    int x=10,y=15;
    x=x+y;
    y=x-y;
    x=x-y;

    printf("x=%d y=%d",x,y);

    return 0;
}
