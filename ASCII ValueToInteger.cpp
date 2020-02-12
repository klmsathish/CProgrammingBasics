#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
char a, b;
int c;
a = getc(stdin);
b = a+1;
c = a;
printf("\nEntered character is %c", a);
printf("\nNext character is %c", b);
printf("\nAscii value of entered char is %d", c);
//printf("%d", getc(stdin)); 
 
} 

