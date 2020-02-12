#include <stdio.h>
int main()
{
     int num;
     printf(" Enter A Number = ");
     scanf("%d",&num);
    int *pointer = &num;
     printf(" VALUE OF NUM = %d",num);
	 printf("\n ADRESS OF NUM = %x",&num);
	 printf("\n VALUE OF NUM USING POINTER = %d",*pointer);
     printf("\n ADDRESS OF NUM USING *POINTER = %x",pointer);
	      if(*pointer % 2 == 0)
     printf("\n IT IS A EVEN NUMBER");
     else
     printf("\n IT IS A ODD NUMBER");
                       
     return 0;
}
