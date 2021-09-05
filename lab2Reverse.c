#include<stdio.h>
int main()
{ 
    int num,r,temp,sum=0;
    printf("enter an integer number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("reverse of digits is=%d",sum);
    return 0;

}