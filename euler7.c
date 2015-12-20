#include<stdio.h>

int a[1000010],b[100010];
int main()
{
int n,i,j=0,k=0;

for(i=2;i<=sqrt(1000000);i++)
{
 if(a[i]==0)
 {

  for(j=i*i;j<=1000000;j+=i)
  a[j]=1;
 }
}

for(i=2;i<=1000000;i++)
{
  if(a[i]==0)
  b[k++]=i;

  if(k==10001)
  break;
}
printf("%d %d\n",k,b[k-1]);

return 0;
}
