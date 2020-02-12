#include<stdio.h>
#include<stdlib.h>
int main()
{

	int n,i;float*pointer,sum = 0, ave = 0 ;
	printf("enter number of elements = ");
	scanf("%d",&n);
	pointer = (float*)calloc(n,sizeof(float));
	for(i = 0; i<n ;i++)
		{
		printf("enter number = ");
		scanf("%f",pointer+i);
		}
		for(i = 0; i <n ;i++)
		{
			sum = sum + *(pointer + i);
			ave = sum/n;
		}	
			printf("average = %f ",ave);
		}
