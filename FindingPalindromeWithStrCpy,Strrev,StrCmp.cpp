#include<stdio.h>
#include<string.h>
main()
{	char name[20];char names[20];int res;
	printf("enter your name = ");
	gets(name);
	strcpy(names,name);
	strrev(name);
	res = strcmp(name, names); 
	if (res == 0)
	{
        printf("\nIT IS A PALINDROME");
}
    else
    {
        printf("\nIT IS NOT A PALINDROME");
    }
}

