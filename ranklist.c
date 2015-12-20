#include<stdio.h>

typedef long long ll;
int main()
{
ll s,sum,t,n,res,count,diff;
scanf("%lld",&t);
while(t--)
{
scanf("%lld%lld",&n,&s);

sum=(n*(n+1))/2;
count=0;

diff=sum-s;
while(diff>0)
{
    diff=diff-(n-1);
    count++;
    n--;
}

printf("%lld\n",count);
}
return 0;
}
