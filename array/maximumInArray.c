#include<stdio.h>
int main()
{
	int ara[5]={10,20,30,40,50},i,n,max;
	max=ara[0];
	for(i=1;i<5;i++){
		if(max<ara[i]);
                 max=ara[i];
		
	}
        printf("maximum=%d",max);
	return 0;
}