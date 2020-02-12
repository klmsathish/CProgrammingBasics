#include<stdio.h>
int main()
{
	int p,c,m;
	printf("ENTER YOUR PHYSICS MARK = ");
	scanf("%d",&p);
	printf("ENTER YOUR CHEMISTRY MARK = ");
	scanf("%d",&c);
	printf("ENTER YOUR MATHS MARK = ");
	scanf("%d",&m);
	switch(p)
	{
		case 100:
		case 90:
		case 80:
		case 70:
			printf("PHYSICS MARK           \tOUTSTANDING \n");
			break;
		case 60:
		case 50:
		case 40:
			printf("PHYSICS MARK             GOOD\n ");
			break;
		case 30:
		case 20:
		case 10:
			printf("PHYSICS MARK             AVERAGE\n");
				break;
		default:
			printf("PHYSICS MARK             YOUR MARK IS NOT A MULTIPLE OF 10 \n");
				break;
	}
	switch(c)
	{
		case 100:
		case 90:
		case 80:
		case 70:
			printf("CHEMISTRY MARK           OUTSTANDING \n");
				break;
		case 60:
		case 50:
		case 40:
			printf("CHEMISTRY MARK           GOOD \n");
				break;
		case 30:
		case 20:
		case 10:
			printf("CHEMISTRY MARK           AVERAGE \n");
				break;
		default:
			printf("CHEMISTRY MARK           YOUR MARK IS NOT A MULTIPLE OF 10 \n");
				break;
}
	switch(m)
	{
			case 100:
		case 90:
		case 80:
		case 70:
			printf("\nMATHS MARK               OUTSTANDING \n");
				break;
		case 60:
		case 50:
		case 40:
			printf("MATHS MARK               GOOD \n ");
				break;
		case 30:
		case 20:
		case 10:
			printf("MATHS MARK               AVERAGE \n");
				break;
		default:
			printf("MATHS MARK               YOUR MARK IS NOT A MULTIPLE OF 10\n");
				break;
			}
	return 0 ;
	}
