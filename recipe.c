#include<stdio.h>

int gcd(int a,int b)
{
 return b?gcd(b,a%b):a;
}
int main()
{
int t,n,a[100],i,g;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
g=gcd(a[0],a[1]);
for(i=2;i<n;i++)
g=gcd(g,a[i]);

for(i=0;i<n;i++)
printf("%d ",a[i]/g);

printf("\n");
}
return 0;
}
