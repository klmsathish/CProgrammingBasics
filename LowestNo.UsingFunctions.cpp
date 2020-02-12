#include<stdio.h>

int mini(int a,int b)
{
	int mini;
			if(a >b)
			{	
			return b;
			}
			else
			{
			return a;
		}
	}
int main()
{  	int a,b, mini_ ;
	printf("enter first number = ");
	scanf("%d",&a);
	printf("enter second number = ");
	scanf("%d",&b);
	mini_ = mini(a,b);
	printf("minimum no. = %d",mini_);
}

			
		
			
	
	
	




