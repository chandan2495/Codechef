#include<stdio.h>

int main()
{
int n,a[100010],count=0,max=0,i;

scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 if(a[i]>0)
 count++;
 else
 {
  if(count>max)
  max=count;
  count=0;
 }
}
  if(count>max)
  max=count;

printf("%d\n",max);

return 0;
}
