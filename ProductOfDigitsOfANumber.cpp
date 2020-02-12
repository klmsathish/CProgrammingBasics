#include<stdio.h>
int main()
{
	int remainder,product = 1,whole;
	printf("enter a  no to multiply its digits= ");
	scanf("%d",&whole);
if (whole != 0)
	{
	while (whole != 0 )
	{
		remainder = whole % 10;
		product = product * remainder ;
		whole = whole /10;
	
	}

printf("product = %d",product);
}
else
{
			 printf("multiply = 0");
	
	}		
return 0;
}

