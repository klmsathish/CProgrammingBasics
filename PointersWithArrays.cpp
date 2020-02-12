#include<stdio.h>
main()
{
	int i;
	int *pointer[3];
	int val[3];
	for(i =0;i<3;i++)
	{
		printf("enter the value = " );
		scanf("%d",&val[i]);
		pointer[i] = &val[i];
	}
	for(i = 0;i<3;i++)
	{
		printf("value = %d\n",*pointer[i]);
	}
}
