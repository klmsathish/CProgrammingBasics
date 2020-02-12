#include<stdio.h>
struct studentdetail
{
	char Name[10];
	int UID;
	char Gender[10];
	float Marks;
};
int main()
{
	float sum = 0;
	struct studentdetail s[3];
	int i = 0;
	for (i = 0;i<3;i++)
{

	printf("\nEnter name : ");
	scanf("%s",s[i].Name);
	printf("\nEnter unique id : ");
	scanf("%d",&s[i].UID);
	printf("\nEnter gender : ");
	scanf("%s",s[i].Gender);
	printf("\nEnter marks : ");
	scanf("%f",&s[i].Marks);
	sum = sum + s[i].Marks;	
}
float average;
average = sum/3;
printf("\n average = %f",average);

if(s[0].Marks>s[1].Marks&&s[0].Marks>s[2].Marks)
{
	printf("\n Name of the Candidate with highest mark = %s ",s[0].Name);
	printf("\n UID of the Candidate with highest mark = %d ",s[0].UID);
	printf("\n Gender of the Candidate with highest mark = %s ",s[0].Gender);

}
if(s[1].Marks>s[2].Marks&&s[1].Marks>s[0].Marks)
{
	printf("\nName of the Candidate with highest mark = %s",s[1].Name);
	printf("\n UID of the Candidate with highest mark = %d ",s[1].UID);
	printf("\n Gender of the Candidate with highest mark = %s ",s[1].Gender);
}
else
{ 
printf("\nName of the Candidate with highest mark = %s",s[2].Name);
	printf("\n UID of the Candidate with highest mark = %d ",s[2].UID);
	printf("\n Gender of the Candidate with highest mark = %s ",s[2].Gender);
}

}


