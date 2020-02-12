#include<stdio.h>
main()
{
	float number;int whole,remainder;
	printf("enter a float number = ");
	scanf("%f",&number);
	whole = number / 1;
	remainder = whole % 10;
	printf("LAST DIGIT OF INTEGER VALUE = %d",remainder);
}
