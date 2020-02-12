#include <stdio.h>
int main()
{
     int a,b;
     printf(" Enter First Number = ");
     scanf("%d",&a);
     printf(" Enter Second Number = ");
     scanf("%d",&b);
     int *pointer = &a;
     int *pointer_=&b;
    
	 if(*pointer > *pointer_)
     printf("\n HIGHEST NO. = %d ",*pointer);
     else
     printf("\n HIGHEST NO. = %d",*pointer_);                  
     return 0;
}
