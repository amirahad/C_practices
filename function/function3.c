#include<stdio.h>
double trianglearea(double b , double h);
int main()
{
    double base,height;
    printf(" enter base :");
    scanf("%lf",&base);
    printf("enter height :");
    scanf("%lf",&height);
    printf("area = %.lf\n",trianglearea(base,height));

}
double trianglearea(double b , double h)
{
    return 0.5*b*h;
}
