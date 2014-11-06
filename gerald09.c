#include<stdio.h>

int main()
{
int t,n,m,k,i,j;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d%d",&n,&m,&k);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("A");
  }
  printf("\n");
 }
}

return 0;
}
