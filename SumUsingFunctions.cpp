#include<stdio.h>
void sum(int a ,int b)
{   
	float sum = 0;
	sum = a+b;
	printf("Sum of two numbers = %f ",sum);
}
main()
{ 
float p,c;
	printf("ENTER first number= ");
	scanf("%f",&p);
	printf("ENTER second  number= ");
	scanf("%f",&c);
	sum(p,c);
	return 0;
}
