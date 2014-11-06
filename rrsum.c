#include<stdio.h>

typedef unsigned long long ll;
int main()
{
ll temp,res,q,n2,mid,n,m;

scanf("%lld%lld",&n,&m);
n2=3L*n;
//printf("%lld\n",n2);
temp=n+2;
mid=(n2+temp)/2L;
//printf("%lld\n",mid);
while(m--)
{
scanf("%llu",&q);
if(q<n+2)
printf("0\n");
else if(mid>q)
printf("%lld\n",n-(mid-q));
else if(mid<q)
printf("%lld\n",n-(q-mid));
else if(q==mid)
printf("%lld\n",n);
}
return 0;
}
