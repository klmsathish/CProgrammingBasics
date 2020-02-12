#include<stdio.h>
int mini(int a, int b )
{
int mini = 0;

if (a> b)
{
	printf( "lowest no. = %d ",b);
}
else
{
	printf("lowest no = %d",a);
}
}
int main()
{
int c,d;
printf("enter first number = ");
scanf("%d",&c);
printf("enter second number = ");
scanf("%d",&d);
mini(c,d);
}
