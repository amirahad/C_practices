#include<stdio.h>
#include<stdlib.h>
int main(){
   int a[50],i,j,k, count = 0, number;
   
   printf("Enter size of the array\n");
   scanf("%d",&number);
   
   printf("Enter Elements of the array:\n");
   
   for(i=0;i<number;i++){
      scanf("%d",&a[i]);
     
   }
   
   printf("Entered element are: \n");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
   
   for(i=0;i<number;i++){
      for(j = i+1; j < number; j++){
         if(a[i] == a[j]){
            for(k = j; k <number; k++){
               a[k] = a[k+1];
            }
            
            number--;
            j--;
            
         }
      }
   }
   
   printf("\nelements left in array after removing the duplicates:\n %d ", number );
   printf("\nAfter deleting the duplicate element the Array is:\n");
   
   for(i=0;i<number;i++){
       
      printf("%d ",a[i]);
   }
   
   
}