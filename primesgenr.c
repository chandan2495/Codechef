#include<stdio.h>

int a[1000010],b[100010];
int main()
{
int n,i,j=0,k;

for(i=2;i<=sqrt(1000000);i++)
{
 if(a[i]==0)
 {
  b[j++]=i;

  if(j==10001)
  break;
  for(j=i*i;j<=1000000;j+=i)
  a[j]=1;
 }
}
printf("%d %d\n",j,b[j]);

return 0;
}
