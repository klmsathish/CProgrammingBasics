#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,A;
	printf("enter n=");
	scanf("%d",&n);
	A =n%2;
	if(A==0){
		printf("           even");
	}
	else{
		printf("    odd");
	}
	return 0;
	
	  
}

