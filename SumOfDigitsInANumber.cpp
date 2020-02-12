#include<stdio.h>
int main()
{
	int o_num,rem,rev = 0,sub_num,sum;
	printf("ENTER A NUMBER TO BE REVERSED = ");
	scanf("%d",&o_num);
	sub_num = o_num;
	while(o_num != 0)
	{
		
	
	rem = o_num%10;
	o_num = o_num /10;
	sum = sum + rem;
	rev = rev*10 + rem;
}	if(rev == sub_num)
	

{
	printf("\nIT IS A PALINDROME");
}
else
{
	printf("\nIT IS NOT A PALINDROME");
	}
 return 0 ;
}
	

