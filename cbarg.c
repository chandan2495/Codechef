#include<stdio.h>

typedef long long ll;
int main()
{
int t,n,a[100010],i;
ll res=0;

scanf("%d",&t);
while(t--)
{
 res=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(i=1;i<n;i++)
 res+=(a[i]>a[i-1]?a[i]-a[i-1]:0);

 printf("%lld\n",res+a[0]);
}

return 0;
}
