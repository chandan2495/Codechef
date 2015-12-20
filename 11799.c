#include<stdio.h>

int main()
{
int t,n,max,a[100010],i,count=1;

scanf("%d",&t);
while(t--)
{
 max=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  if(a[i]>max)
   max=a[i];
 }

 printf("Case %d: %d\n",count,max);
 count++;
}

return 0;
}
