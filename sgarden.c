#include<stdio.h>

typedef long long ll;
#define mod 1000000007
int abs(int a)
{
    return a>0?a:-a;
}
int main()
{
int t,n,a[100010],index[100010],i;
ll count=0;
scanf("%d",&t);

while(t--)
{
 scanf("%d",&n);
 for(i=1;i<=n;i++){
 scanf("%d",&a[i]);
 index[a[i]]=i;
}
 count=0;
 for(i=1;i<=n;i++)
 {
  count+=abs(index[i]-i);
 }
 if(count!=0)
 printf("%lld\n",count%mod);
 else
    printf("1\n");
}

return 0;
}
