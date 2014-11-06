#include<stdio.h>

typedef unsigned long long ll;

ll gcd(ll a,ll b)
{
return b?gcd(b,a%b):a;
}

int main()
{
int t;
ll den,num,temp,n,m;

scanf("%d",&t);
while(t--)
{
 scanf("%lld%lld",&n,&m);
 den=n*m;
 printf
 num=den/2;
 temp=gcd(num,den);
 printf("%lld/%lld\n",num/temp,den/temp);
}
return 0;
}
