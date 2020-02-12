#include<stdio.h>
int main()
{
	int a,fac =1;
	printf("ENTER A NUMBER TO GET ITS FACTORIAL VALUE : ");
	scanf("%d",&a);
	for (int i =1;i <= a;i++)
	{
		fac = fac *i;
	}
	printf("FACTORIAL VALUE OF THE GIVEN NUMBER : %d",fac);
	return 0 ;
}
