#include<stdio.h>
int findsum (int mark[],int size)
{
	int sum = 0,i;
	for( i = 0 ; i < size ;i++)
	
		sum = sum + mark[i];
return sum;
}
int main()
{	
int mark[5],size = 5;
int sum_array;
for(int i = 0;i<5;i++)
{
	printf("Enter your mark =  ");
	scanf("%d",&mark[i]);

	 sum_array = findsum(mark,size);
	
}
printf("sum = %d",sum_array);
}
