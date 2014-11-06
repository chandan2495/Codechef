#include<stdio.h>

typedef long long ll;
#define mod 1000000007

ll recur(ll n)
{
    printf("%lld\n",n);
 if(n<=4)
 return n;
 else if(n%3==0)
 return (3*recur(n-3))%mod;
 else
 return (2*recur(n-2))%mod;
}

int main()
{
ll t,n;
scanf("%lld",&t);
while(t--)
{

 scanf("%lld",&n);
 printf("%lld\n",recur(n));
}
return 0;
}
