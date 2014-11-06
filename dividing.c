#include<stdio.h>

typedef long long ll;
int main()
{
int c[100100],i;
ll n,sum=0,sum1=0;

scanf("%lld",&n);
for(i=0;i<n;i++){
scanf("%d",&c[i]);
sum+=c[i];
}

sum1=n*(n+1);
sum1/=2;
if(sum==sum1)
printf("YES\n");
else
printf("NO\n");
return 0;
}
