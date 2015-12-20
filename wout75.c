#include<stdio.h>
#include<string.h>
int a[1000100];
int main()
{
int t,n,h,i,k,l,j,flag=0,h1;
long long min,sum;

scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&h);
for(i=0;i<=n;i++)
    a[i]=0;
for(j=0;j<n;j++)
{
scanf("%d%d",&l,&h1);
a[l]++;
a[h1+1]--;
}
for(i=1;i<n;i++)
    a[i]=a[i]+a[i-1];

min=9999999;sum=0;
for(i=0;i<h;i++)
{
    sum+=(n-a[i]);
}
min=sum;
j=0;
for(i=h;i<n;i++,j++)
{
    sum=(sum-(n-a[j]))+(n-a[i]);
    if(sum<min)
        min=sum;
}
if(min<0)
    min=0;
printf("%lld\n",min);
}
return 0;
}
