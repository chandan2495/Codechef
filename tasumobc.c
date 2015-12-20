#include<stdio.h>

typedef long long ll;
#define mod 1000000007
ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
int t,n,i;
ll c,sum,p,d,j;
scanf("%d",&t);

while(t--)
{
 sum=p=1;
 scanf("%d",&n);
 c=1;
 for(j=1;j<=(n/2);j++)
 {
  d=gcd(c,j);
  c/=d;
  c*=(n-j+1)/(j/d);
  c=c%mod;
  //printf("%d\n",c);
  p=sum;
  sum=(sum+(c%3))%mod;
 }
 if(n%2==0)
 sum=(sum+p)%mod;
 else
 sum=(2*sum)%mod;

 printf("%lld\n",sum%mod);
}

return 0;
}
