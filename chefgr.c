#include<stdio.h>

int main()
{
int t,n,m,a[1001],max,i;

scanf("%d",&t);

while(t--)
{
 scanf("%d%d",&n,&m);
 max=0;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  if(max<a[i])
  max=a[i];
 }

 for(i=0;i<n;i++)
 {
  if(a[i]!=max)
  m-=max-a[i];
 }
 if(m>=0&&m%n==0)
 printf("Yes\n");
 else
 printf("No\n");
}

return 0;
}
