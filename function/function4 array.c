#include<stdio.h>

int maximum(int x[])
{
    int i, max=x[0];
    for(i=1;i<5;i++)
    {
       if(max<x[i]);
       max=x[i];
    }
    return max;
}
int main()
{
    int a[]={25,5,56,52,23};
    int maximumvalue = maximum(a);
    printf("maximum number of array = %d\n",maximumvalue);


}

