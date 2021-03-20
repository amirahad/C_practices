#include<stdio.h>
int main()

{
    int number;
    printf("enter your number:");
    scanf("%d",&number);
 repeat:
    printf("%d\n",number);
    number++;

    if(number<=100)
        goto repeat;
    return 0;
}






