#include<stdio.h>
float mini(float a,float b);
int main()
{  
	int mini_;
	float a,b;
	
	printf("enter first number = ");
	scanf("%f",&a);
	printf("enter second number = ");
	scanf("%f",&b);
	
	mini_ = mini(a, b);
	printf("minimum no. = %d",mini_);
}
float mini(float a,float b)
{          float minim;
	
			if(a >b)
			{	
			minim = b;
			}
			else
			{
			minim = a;
		}
			
			return minim;
			
	}
	
	




