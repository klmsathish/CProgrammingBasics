#include<stdio.h>
int main()
{
	int physics,chemistry,maths;
	printf("physics:");
	scanf("%d",&physics);
	printf("chemistry:");
	scanf("%d",&chemistry);
	printf("maths:");
	scanf("%d",&maths);
	printf("\nphysics mark is %d\n",physics);
	printf("\nchemistry mark is %d\n",chemistry);
	printf("\nmaths mark is %d\n",maths);
	int average=(physics+chemistry+maths)/3;
	printf("    \n Average:%d\n",average);
	return 0;

}
 
