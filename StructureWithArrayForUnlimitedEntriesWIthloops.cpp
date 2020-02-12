
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
int high = 0 ,flag;
for(i = 0;i<3;i++)
{
	if(s[i].BookPrice > high)
	{
	high = s[i].BookPrice;	
	flag = i;
	}
}

printf("name of the book with highest price = %s",s[flag].BookName);

}

