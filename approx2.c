#include<stdio.h>
#include<limits.h>

typedef long long ll;
int main()
{
int t,a[5000],n,k,i,j;
ll diff,temp,pairs;

scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);

diff=LONG_MAX; pairs=0;

for(i=0;i<n;i++)
    scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(i!=j)
  {
   temp=abs(a[i]+a[j]-k);
   if(temp<diff)
   diff=temp;
  }
 }
}

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(i!=j)
  {
   temp=abs(a[i]+a[j]-k);
   if(temp==diff)
   pairs++;
  }
 }
}
printf("%lld %lld\n",diff,pairs/2);

}

return 0;
}
