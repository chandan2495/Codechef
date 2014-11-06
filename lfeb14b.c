#include<stdio.h>
#include<math.h>

#define mod 1000000007
typedef long long ll;
int main()
{
int t,n,a[100010],i,n1,max,count;
ll sum=0,temp,am1,am2;
scanf("%d",&t);
while(t--)
{
sum=0; max=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 if(max<a[i])
    max=a[i];
 }
 count=0;
 for(i=0;i<n;i++)
 {
     if(a[i]==max)
        count++;
 }
 sum=1;
 for(i=0;i<count;i++)
    sum=(sum<<1)%mod;
 printf("%lld\n",sum-1);
}
return 0;
}
