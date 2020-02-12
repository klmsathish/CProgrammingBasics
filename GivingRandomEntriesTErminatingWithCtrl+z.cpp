#include<stdio.h>
int main()
{
	FILE *pointer;
	char filename[] = "file 30 .txt";
	char c;
	pointer = fopen(filename,"w");
	while((c=getchar()) != EOF)
	
	putc(c,pointer);
	fclose(pointer);
	return 0;
}
