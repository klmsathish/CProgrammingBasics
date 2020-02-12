
#include<stdio.h>
struct Bankaccount
{
	char name[0];
	int accountno;
	float Balance;
};
union Bankaccount1
{
	char name[];
	int accountno;
	float Balance;
};
int main()
{
struct Bankaccount b;
union Bankaccount1 ba;
printf("size of structure = %d\n",sizeof(b));
printf("size of union = %d\n",sizeof(ba));
return 0 ;
}
