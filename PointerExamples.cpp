#incl0ude<stdio.h>
#include<string.h>
int main()
{
	int val = 30;
	int *pointer = &val;
	printf(" adress of val = %x",&val);
	printf("\n value of pointer variable = %x",pointer);
	printf("\n value of pointer = %d",*pointer);
}
