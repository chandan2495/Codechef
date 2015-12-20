#include<stdio.h>

int main()
{
int t,a[1010],n,i,j,p,f,k,max;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
p=1<<n;

f=0;max=0;
for(i=0;i<p;i++)
{
f=0;
 for(j=0;j<n;j++)
 {
  if((i>>j)&1){
  f=f^a[j];
  }
 }
 f=f^k;
 max=max<f?f:max;
}

printf("%d\n",max);
}
return 0;
}
