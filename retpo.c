#include<stdio.h>

typedef long long ll;
ll abs(ll a)
{
    return a>0?a:-a;
}

ll max(ll a,ll b)
{
    return a>b?a:b;
}

int main()
{
int t;
ll x,y;

scanf("%d",&t);
while(t--)
{
 scanf("%lld%lld",&x,&y);
    if((abs(x)+abs(y))%2==0)
        printf("%lld\n",2*max(abs(x),abs(y)));
     else
        printf("%lld\n",1+2*max(abs(x),abs(y)-1));
}

return 0;
}
