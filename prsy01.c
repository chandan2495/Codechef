#include<stdio.h>

typedef unsigned long long ll;
int main()
{
ll n,m,ans;
int t;
scanf("%d",&t);
while(t--)
{
    scanf("%llu%llu",&n,&m);
    ans=(m+(n/2LL));
    if(ans>n)
        ans=ans%n;

printf("%llu\n",ans);
}


return 0;
}
