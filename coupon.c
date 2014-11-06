#include<stdio.h>
#include<malloc.h>

typedef long long ll;
ll max(ll a,ll b)
{
    return a>b?a:b;
}

ll min(ll a,ll b)
{
    return a>b?b:a;
}

int main()
{
int t,n,m,i,j;
ll **dp,min1,min2,min3,**price,**disc;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&m);
min1=(1LL<<63)-1;
min2=(1LL<<63)-1;
min3=(1LL<<63)-1;
price=malloc(sizeof(ll)*n);
for(i=0;i<n;i++)
price[i]=malloc(sizeof(ll)*m);

disc=malloc(sizeof(ll)*n);
for(i=0;i<n;i++)
disc[i]=malloc(sizeof(ll)*m);

dp=malloc(sizeof(ll)*n);
for(i=0;i<n;i++)
dp[i]=malloc(sizeof(ll)*m);

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        scanf("%lld",&price[i][j]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        scanf("%lld",&disc[i][j]);
}


for(i=0;i<m;i++){
    dp[0][i]=price[0][i];
    if(min1>dp[0][i])
        min1=dp[0][i];
}

for(i=1;i<n;i++)
{
    min2=(1LL<<63)-1;
    for(j=0;j<m;j++)
    {
        dp[i][j]=min((dp[i-1][j]+max(0LL,price[i][j]-disc[i-1][j])),min1+price[i][j]);
        min2=min(min2,dp[i][j]);
            if(i==n-1)
            {
                if(min3>dp[i][j])
                    min3=dp[i][j];
            }
    }
    min1=min2;

}
printf("%lld\n",min3);
free(price);
free(dp);
free(disc);
}
return 0;
}
