#include<stdio.h>
#include<string.h>

typedef long long ll;
#define mod 1000000007
int abs(int a)
{
    return a>0?a:-a;
}
int main()
{
int t,n,a[100010],index[100010],i,temp[100010];
ll count=0;
scanf("%d",&t);

while(t--)
{
 scanf("%d",&n);
 for(i=1;i<=n;i++){
 scanf("%d",&a[i]);
 index[i]=i;
}
 count=0;
 while(1)
 {
     count++;
 for(i=1;i<=n;i++)
 {
    temp[a[i]]=index[i];
 }
 for(i=1;i<=n;i++)
    index[i]=temp[i];
 for(i=1;i<=n;i++)
    printf("%d ",index[i]);
 printf("\n");
 for(i=1;i<=n;i++)
 {
  if(index[i]==i)
    continue;
  else
    break;
 }
 if(i==n+1)
    break;
 }
 if(count!=0)
 printf("%lld\n",count%mod);
 else
    printf("1\n");
}

return 0;
}
