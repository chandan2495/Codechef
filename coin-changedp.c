#include<stdio.h>
#include<string.h>

int coin[55],m,sum=0,dp[52][252];
int main()
{
int n,i,j;
scanf("%d%d",&n,&m);

for(i=0;i<m;i++)
scanf("%d",&coin[i]);
memset(dp,0,sizeof(dp));
for(i=0;i<m;i++)
    dp[i][i]=1;

printf("%d\n",sum); //change to long long later

return 0;
}
