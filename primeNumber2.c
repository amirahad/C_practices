#include<stdio.h>
int main()
{
	int num, i,count=0;
	printf("enter any positive number:");
	scanf("%d",&num);
	if(num>2){
		for(i=0;i<num;i++){
			if(num%i==0){
				count++;
				break;
			}
		}
		if(count==0)
		printf("prime number");
		else
		printf("not prime");
	}
	else
	printf("not prime");
	return 0;
}