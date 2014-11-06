#include<stdio.h>

typedef long long ll;

ll max(ll a,ll b)
{
    return a>b?a:b;
}
ll min(ll a,ll b)
{
    return a>b?b:a;
}
int main()
{
int t,n,a[11],i,j;
ll res,max_eval[11],min_eval[11];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

max_eval[0]=a[0];
min_eval[0]=a[0];
for(i=1;i<n;i++)
{
  if(a[i]>0)
  {
   max_eval[i]=max(max(max_eval[i-1]+a[i],max_eval[i-1]-a[i]),max_eval[i-1]*a[i]);
   min_eval[i]=min(min(min_eval[i-1]+a[i],min_eval[i-1]-a[i]),min_eval[i-1]*a[i]);
  }
  else
  {
   max_eval[i]=max(max(max_eval[i-1]+a[i],max_eval[i-1]-a[i]),min_eval[i-1]*a[i]);
   min_eval[i]=min(min(min_eval[i-1]+a[i],min_eval[i-1]-a[i]),max_eval[i-1]*a[i]);
  }
}
printf("%lld\n",min_eval[n-1]);
}

return 0;
}
