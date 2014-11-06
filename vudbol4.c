#include<stdio.h>

int main()
{
int n,i,j,t;
char s[100][100];

scanf("%d\n",&n);
while(n!=0)
{
 for(i=0;i<n;i++)
 {
  for(j=0;j<(n-1);j++)
  {
    scanf("%c",&s[i][j]);
  }
  if(i!=n-1)
  scanf("%c\n",&s[i][j]);
  else
    scanf("%c",&s[i][j]);
 }
/*
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
  printf("%c",s[i][j]);
  }
  printf("\n");
 }*/

 for(i=0;i<n;i++)
 {
  t=2;
  while(t--)
  {
   for(j=0;j<n;j++)
   {
    printf("%c%c",s[i][j],s[i][j]);
   }
   printf("\n");
  }
 }

 scanf("%d",&n);
 if(n==0)
    break;
 else
    scanf("\n");
}

return 0;
}
