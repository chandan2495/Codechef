#include<stdio.h>
#include<stdlib.h>

long long prime[]={2,3,5,7,11,13,17,19,23,29,31};
long long mulmod(long long a,long long b,long long c)
{
long long x=0,y=a%c;
while(b>0)
{
if(b&1==1)
{
x=(x+y)%c;
}
y=(y<<1)%c;
b>>=1;
}
return x%c;
}


long long modulo(long long a,long long b,long long c)
{
long long x,y;
x=1;
y=a%c;
while(b>0)
{
if(b&1==1)
x=mulmod(x,y,c);
y=mulmod(y,y,c);
b>>=1;
}
return x%c;
}

inline long long miller(long long p,long long iterations)
{
long long s=p-1,a,mod,temp;
int i;
if(p<2)
return 0;
if(p!=2&&p%2==0)
return 0;

for(i=0;i<11;i++)
{
if(p%prime[i]==0&&p!=prime[i])
return 0;
else if(p==prime[i])
return 1;
}
if(p<999)
return 1;

while(s%2==0)
s/=2;

for(i=0;i<iterations;i++)
{
a=rand()%(p-1)+1;
temp=s;
mod=modulo(a,temp,p);
while(temp!=p-1&&mod!=1&&mod!=p-1)
{
mod=mulmod(mod,mod,p);
temp*=2;
}
if(mod!=p-1&&temp%2==0)
return 0;
}
return 1;
}
