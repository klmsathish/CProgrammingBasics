#include<stdio.h>
main()
{
	FILE *pointer;
	int a;
	char filename[] = "file 1 .txt";
	pointer = fopen(filename,"w");
	printf("enter a number = ");
	scanf("%d",&a);
	fprintf(pointer,"%d",a);
	if(pointer == NULL)
	{
		printf("error in file correction");
		
	}
	return 0;
	
}
