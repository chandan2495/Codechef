#include<stdio.h>

int main()
{
int n,t,a[5000],a1,b,i,min;
scanf("%d%d",&n,&t);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

while(t--)
{
min=10;
 scanf("%d%d",&a1,&b);
 for(i=a1;i<=b;i++)
 {
  if(min>a[i])
  min=a[i];
 }
 printf("%d\n",min);
}
return 0;
}
