#include<stdio.h>
#include<string.h>

typedef long long ll;
ll coin[55],m,sum=0,memo[56][256];

ll change(ll i,ll n)
{
    if(n==0)
        return 1;
    if(i==m||n<0)
        return 0;
    if(memo[i][n]==-1)
        memo[i][n]=change(i+1,n)+change(i,n-coin[i]);
    return memo[i][n];
}

int main()
{
ll n,i,j;
scanf("%lld%lld",&n,&m);

for(i=0;i<m;i++)
scanf("%lld",&coin[i]);
memset(memo,-1,sizeof(memo));

printf("%lld\n",change(0,n)); //change to long long later

return 0;
}
