#include<stdio.h>

int main()
{
 int i,j;
 for(i=0;i<5;i++)
 {
  for(j=i;j<5;j++)
  printf(" ");
  for(j=0;j<=2*i;j+=1)
  printf("* ");
  printf("\n");
 }



 return 0;
}
