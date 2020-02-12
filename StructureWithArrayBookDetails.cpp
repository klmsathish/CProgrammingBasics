#include<stdio.h>
struct bookdetails
{
	char BookName[10];
	char BookAuthor[10];
	int  NoOfPages;
	float BookPrice;
};
int main()
{
	struct bookdetails s[3];
	int i = 0;
	for (i = 0;i<3;i++)
{
	printf("\nEnter bookname : ");
	scanf("%s",s[i].BookName);
	printf("\nEnter bookauthor : ");
	scanf("%s",s[i].BookAuthor);
	printf("\nEnter No. OF Pages : ");
	scanf("%d",&s[i].NoOfPages);
	printf("\nEnter bookprice : ");
	scanf("%f",&s[i].BookPrice);
}
if(s[0].BookPrice>s[1].BookPrice && s[0].BookPrice>s[2].BookPrice)
printf("\nNAME OF THE BOOK WHICH HAS HIGHEST COST = %s",s[0].BookName);
if(s[1].BookPrice>s[2].BookPrice && s[1].BookPrice>s[0].BookPrice)
printf("\nNAME OF THE BOOK WHICH HAS HIGHEST COST = %s",s[1].BookName);
else
printf("\nNAME OF THE BOOK WHICH HAS HIGHEST COST = %s",s[2].BookName);
}

