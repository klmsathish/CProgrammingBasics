#include <stdio.h>
int swap(int *x,int  *y);
 main()
{
	int a,b;
	printf("Enter first Number = ");
	scanf("%d",&a); 
	printf("Enter second Number = ");
	scanf("%d",&b);
	printf("before swapping                                     %d %d\n",a,b );
	swap(*a,*b);
	printf("after swap                                          %d %d\n",a,b );
	

}
int swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	
}
