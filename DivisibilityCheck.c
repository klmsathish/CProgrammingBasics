#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,A,B;
 printf("enter n:");
 scanf("%d",&n);
 A=n%5;
 B=n%11;
 if(A==0&&B==0){
 	printf("    divisible by 5&11");
 }
 else{
 	printf("      its not divisible");
 }
 return 0;
 
}
