#include<stdio.h>

int main()
{
int t,n,x,y,i,j;
scanf("%d",&t);
while(t--)
{
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d%d",&x,&y);
 j=1;
 for(i=0;i<n-1;i++)
 {
  printf("%d %d\n",j,j+1);
  j++;
 }
}
return 0;
}
