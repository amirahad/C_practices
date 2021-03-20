#include<stdio.h>
int main()
{
	int i,a[100], position,n,value;
	printf("how many numbers in your array: \n");
	scanf("%d",&n);
	printf("enter your array numbers: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the value you want to search: \n");
	scanf("%d",&value);
	position=-1;
	for(i=0;i<n;i++){
		if(value==a[i]){
			position=i+1;
			break;
		}
	}
	if(position=-1){
		printf("item is not found\n");
	}
	else
	printf("%d is found in %d position in your array.",value, position);
	return 0;
}
		