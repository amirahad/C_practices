#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter a number: \n");
	
	scanf("%d",&k);
	printf( "Multiplication Table of %d\n",k); 
	for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",k,i,k*i);
	}
	return 0;
}