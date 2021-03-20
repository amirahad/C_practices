#include<stdio.h>
int main()
{
    int num;
    printf("enter any integer number :");
    scanf("%d",&num);
    printf("square is : %d",square(num));
}
int square(int a)
{
    return (a*a);
}
