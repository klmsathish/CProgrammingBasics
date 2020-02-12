#include<stdio.h>
int main()
{
	int i,sum = 0, marks[5],average;
	for (i = 0 ;i<5;i++)
	{
	
	printf("ENTER MARK : ");
	scanf("%d",&marks [i]);
}
for (i = 0 ;i <5;i++)
{
printf("the array has %d \n ",marks[i]);	
sum = sum + marks[i];
average = sum/5;
}
printf("sum = %d",sum);
printf("\naverage = %d",average);
}

