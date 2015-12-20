#include<stdio.h>

int main()
{
int t,i,count,n,a[100010];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
count=0;
for(i=0;i<n-1;i++)
{
 if(a[i]!=a[i+1])
 {
  if(i==0||(i>0&&a[i]==a[i-1]))
  count+=2;
  else
  count++;
 }
}

printf("%d\n",count);
}

return 0;
}
