#include<stdio.h>

typedef long long ll;
int main()
{
int t,n,k,w[11],c[11],i,j;
ll res=0,weight,cost=0,max;

scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d%d",&c[i],&w[i]);

max=0;
for(i=0;i<(1<<n);i++)
{
cost=0; weight=0;
 for(j=0;j<n;j++)
 {
  if(i&(1<<j))
  {
   weight+=w[j];
   cost+=c[j];
  }
 }

 if(cost<=k&&weight>max)
 max=weight;
}
printf("%lld\n",max);
}
return 0;
}
