#include<stdio.h>
ll abs(ll a)
{
    return a>0?a:-a;
}

int main()
{
long long n1,n2;
while(scanf("%lld%lld",&n1,&n2)!=EOF)
{
 printf("%lld\n",abs(n2-n1));
}
return 0;
}
