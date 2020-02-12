#include<stdio.h>
int main()
{
	int fac_val=1,fac;
	printf("ENTER A NO. TO SHOW ITS FACTORIAL VALUE = ");
	scanf("%d",&fac);
	while(fac != 0)
	{
		fac_val = fac_val*(fac--);

	}
			printf("FACTORIAL VALUE = %d",fac_val);
return 0;
}
