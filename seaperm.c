#include<stdio.h>

int main()
{
int t,n,k,s,a[10010],i;
scanf("%d",&t);
while(t--)
{
scanf("%d%d%d",&n,&k,&s);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
printf("%d ",i+1);
printf("\n");
}
return 0;
}
