#include<stdio.h>
int main()
{
	int r,c,i,j;
	int A[10][10],B[10][10],C[10][10];
	printf("how many rows and columns");
	scanf("%d %d",&r,&c);

	printf("enter your value of A matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
    printf("\n\nenter your value of B matrix:\n");
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("B[%d][%d]=",i,j);
			scanf("%d",&B[i][j]);
		}
		printf("\n");
	}
	printf("A= ");
	for(i=0;i<r;i++){
            printf("\t");
		for(j=0;j<c;j++){
			printf("%d ",A[i][j]);

		}
		printf("\n");

	}
    printf("\n\n");
	printf("B= ");
	for(i=0;i<r;i++){
            printf("\t");
		for(j=0;j<c;j++){
			printf("%d ",B[i][j]);

		}
		printf("\n");

	}
	printf("\n\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
    printf("\n");
	printf("A+B= ");
	for(i=0;i<r;i++){
            printf("\t");
		for(j=0;j<c;j++){
			printf("%d ",C[i][j]);

		}
		printf("\n");

	}
	return 0;
}