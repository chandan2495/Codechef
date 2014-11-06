#include<stdio.h>

typedef long long ll;

ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}

ll comp(ll a,ll b)
{
    ll c=1,j,d;
    for(j=1;j<=b;j++)
    {
        d=gcd(c,j);
        c/=d;
        c*=(a-j+1)/(j/d);
    }
    return c;
}

int bdigits(ll n)
{
    int count=0;
    while(n)
    {
        n=n>>1;
        count++;
    }
    return count;
}

int main()
{
int t,i;
ll n,a[62];

scanf("%d",&t);
a[1]=a[2]=a[3]=1;
for(i=4;i<61;i++)
{
 if(i%2!=0)
 a[i]=a[i-1];
 else
 a[i]=a[i-1]+comp(i-1,(i/2)-1);
}


while(t--)
{
 scanf("%lld",&n);
 printf("%lld\n",a[bdigits(n)-1]);
}
return 0;
}
