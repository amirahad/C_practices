#include<stdio.h>
int main()
{
	int i,j,r,c;
	int A[10][10],B[10][10],C[10][10];
	printf("enter the number of rows: \n");
	scanf("%d",&r);
	printf("enter the number of columns: \n");
	scanf("%d",&c);
	printf("enter the elements of array A: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("A[%d][%d]= \n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
    printf("enter the elements of array B: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("B[%d][%d]= \n",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	printf("\n\n");
	printf("A= ");
	for(i=0;i<r;i++){
		printf("\n \t");
		for(j=0;j<c;j++){
			printf("%d ",A[i][j]);
		}
	}
	printf("\n\n");
	printf("B= ");
	for(i=0;i<r;i++){
		printf("\n \t");
		for(j=0;j<c;j++){
			printf("%d ",B[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			C[i][j]=A[i][j]-B[i][j];
		}
	}
	printf("\n\n");
	printf("A-B= ");
	for(i=0;i<r;i++){
		printf("\n \t");
		for(j=0;j<c;j++){
			printf("%d ",C[i][j]);
		}
	}
			
	return 0;
}