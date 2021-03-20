#include<stdio.h>
int main()

{
    int a,b,c;
    char sign;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter another number: ");
    scanf("%d",&b);
     c=a+b;
    sign='+';
    printf("%d %c %d=%d\n",a,sign,b,c);
    c=a-b;
    sign='-';
    printf("%d %c %d=%d\n",a,sign,b,c);
    c=a*b;
    sign='*';
    printf("%d %c %d=%d\n",a,sign,b,c);
    c=a/b;
    sign='/';
    printf("%d %c %d=%d\n",a,sign,b,c);

    return 0;
}
