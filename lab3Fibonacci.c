#include<stdio.h>
int main()
{
	int first=0,n,fibo,second=1,count=0;
	printf("enter range:");
	scanf("%d",&n);
	while(count<n){
		if(count<=1){
			fibo=count;
		}
		else{
			fibo=first+second;
			first=second;
			second=fibo;
		}
		
		printf("%d",fibo);
		count++;
	}
	return 0;
}