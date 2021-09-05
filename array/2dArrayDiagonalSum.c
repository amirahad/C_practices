#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,sum=0,uppersum=0,lowersum=0;
	printf("enter your number of row and column: \n");
	scanf("%d %d",&r,&c);
	printf("enter your elements: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] = \n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\na= ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n\t");
	}
	//diagonal sum
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j)
			sum=sum+a[i][j];
			}
	}
     printf("diagonal sum= %d\n",sum);
		
	//upper trigonal sum
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i<j){
			sum=uppersum+a[i][j];
			}
		}
	}
	printf("upper trigonal sum = %d\n",sum);
	
	//lower trigonal sum
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i>j){
			sum=lowersum+a[i][j];
			}
		}
	}
	printf("lower trigonal sum = %d\n",sum);
	
	return 0;
}   
			
	