#include<stdio.h>
int main()
{
	int i,j,n;
        printf("enter a number: "\n);
        scanf("%d,&n");
	for(j=1;j<=n;j++){
		for(i=1;i<=10;i++){
			printf("%d*%d=%d\n",i,j,n*i);
		}
	}
	return 0;
}