#include<stdio.h>
#include<string.h>
 main()
{
	int res;
	char arr[20];char ar[20];
	printf("enter string 1 = ");
	gets (arr);
	printf("enter string 2  = ");
	gets(ar);
	res = strcmp(arr, ar) 
	if (res == 0)
	{
        printf("\nYou entered the same string two times");
    }
 
    else
    {
        printf("\nEntered strings are not same!");
    }
}
