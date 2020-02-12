#include<stdio.h>
int main()
{
int a,b,c,max;
printf("enter any 3 number.\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a>b)
{if(a>c)
max=a;
else
max=c;
}
else
{if(b>c)
max=b;
else
max=c;
}
printf("\nThe greatest number among the three number is=%d\n",max);


	return 0;
}




