/* Q.12 write a program to take a three digit number from the user and rotate 
its digit by one position towards the right.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("enter a number \n ");
    scanf("%d",&x);
    x=(x%10)*100+(x/10);
    printf("After rotate=%d",x);
    return 0;
}