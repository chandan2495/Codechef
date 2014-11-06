#include<stdio.h>
#include<limits.h>

typedef long long ll;

int main()
{
ll n,t,a[10010],min,mini,i;
ll sum=0;
scanf("%lld",&t);
while(t--)
{
 min=INT_MAX;
 scanf("%lld",&n);

 for(i=0;i<n;i++){
 scanf("%lld",&a[i]);
  if(a[i]<min)
  min=a[i],mini=i;
 }
 sum=0;
 for(i=0;i<n;i++)
 {
  if(i!=mini)
  sum+=min+a[i];
 }

 printf("%lld\n",sum);
}

return 0;
}
