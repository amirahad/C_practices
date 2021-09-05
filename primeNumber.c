#include<stdio.h>
int main()
{
	int i,p,x=1;
	printf("enter a number: ");
	scanf("%d",&p);
	if(p<2){
		for(i=2;i<p;i++){
			if(p%i==0){
				x=0;
				break;
			}
		}
		if(x=1)
			printf("the number is prime number.");
		else
			printf("the number is not a prime number.");
	}
	 else
	 	printf("the number is not prime number.");
	 
	 return 0;
		
	}
	