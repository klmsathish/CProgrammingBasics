#include<stdio.h>
int main()
{
	int a,b,c,sum,sub,div,mulp,modulo;
printf("a: ");
scanf("%d",&a);
printf("b: ");
scanf("%d",&b);
printf("c: ");
scanf("%d",&c);
sum= a+b+c;
sub=a-b-c;
div=(a+b+c)/5;
mulp=a*b*c;
modulo=a%b;
printf("the sum : %d\n",sum);
printf("the difference : %d\n",sub);
printf("the division : %d\n",div);
printf("the multiplication : %d\n",mulp);
printf("the modulo : %d\n",modulo);
return 0;
}
