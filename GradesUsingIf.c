#include<stdio.h>
#include<stdlib.h>
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
	printf("    \n Average:%d",average);
	if(average>75){
		printf("\n               Grade A");
	}
	if(average==75){
		printf("\n                Grade B");
	}
	if(average<75){
		printf("\n                  Grade C");
	}
	return 0;

}
 
