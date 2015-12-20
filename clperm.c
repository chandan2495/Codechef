#include<stdio.h>

typedef long long ll;

int main()
{
int t,a[100010],i;
ll sum=0,n,k;

scanf("%d",&t);
while(t--)
{
scanf("%lld%lld",&n,&k);
sum=0;
for(i=0;i<k;i++)
scanf("%d",&a[i]);

sum=n*(n+1);
sum/=2ll;
sum++;
if(sum%2==0)
printf("Mom\n");
else
printf("Chef\n");
}


return 0;

}
