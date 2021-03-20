#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter a number: \n");
	scanf("%d,&k");
	for(j=1;j<=k;j++){
		for(i=1;i<=10;i++){
			printf("%d*%d=%d\n",j,i,j*i);
		}
	}
	return 0;
}
