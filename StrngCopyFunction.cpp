#include<stdio.h>
#include<string.h>
 main()
{
	char arr[20];char ar[20];
	printf("enter string 1 = ");
	gets (arr);
	printf("before copying array 2 is ar\n");
	strcpy(ar,arr);
	printf("after copying array 2 is %s\n",ar);
}
