#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int n,i,*pointer,sum = 0,ave = 0 ;
	printf("enter number of elements = ");
	scanf("%d",&n);
	pointer = (int*)malloc(n*sizeof(int));	
	for (i =0;i<n;i++)	
	{
		printf("enter the number = ");
		scanf("%d",pointer+i);
	}		
	for (i =0;i<n;i++){
	
		printf("\n\n\n\nentered  number = %d \n",*(pointer+i));	
}for (i =0;i<n;i++){
		sum = sum+*(pointer+i);
		ave = sum / n ;
	}	
	printf("\n\n\n\nsum = %d\n",sum);	
	printf("\n\n\n\nave = %d\n",ave);																																																																																																			
}

