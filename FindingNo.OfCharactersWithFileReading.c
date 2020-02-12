#include<stdio.h>
#include<string.h>
void main()
{
  FILE *a;
  int count;
  char c,s;
  char filename[]="solve.txt";
  a=fopen(filename,"w");
  fprintf(a,"solve more problem");
  fprintf(a,"solving problem is intresting");
  fclose(a);
 a=fopen(filename,"r");
  while(!feof(a))
  {
  	s=fgetc(a);
  	printf("%c",s);
  if(s!=' ')
  	count++;
  }
  printf("\n\n\t\t\tthe no. of characters are :%d",count);
  

  
}
