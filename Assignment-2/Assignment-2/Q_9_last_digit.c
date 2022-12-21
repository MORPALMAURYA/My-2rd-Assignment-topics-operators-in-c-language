// Q.9 write a program to make the last digit of a number stored in a varible as zero.

// example x=1234 value last digit zero x=1230

#include<stdio.h>
int main()
{
    int x;

    printf("enter a number \n");
    scanf("%d",&x);

     x=x/10;
     x=x*10;
    printf("%d",x);
    return 0;
}