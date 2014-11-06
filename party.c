#include<stdio.h>

int main(){

int m,n,fee[102],fun[102],dp[102][502],i,j,sum[102][502],max1=0,max2=0;

scanf("%d%d",&m,&n);

while(m!=0&&n!=0)
{
    max1=0; max2=0;
 for(i=1;i<=n;i++)
 scanf("%d%d",&fee[i],&fun[i]);

 for(i=1;i<=n;i++)
 dp[i][0]=0, sum[i][0]=0;
 for(j=0;j<=m;j++)
 dp[0][j]=0, sum[0][j]=0;

 for(i=1;i<=n;i++)
 {
  for(j=0;j<=m;j++)
  {
   if(fee[i]<=j)
   {
    if(fun[i]+dp[i-1][j-fee[i]]>dp[i-1][j])
    dp[i][j]=fun[i]+dp[i-1][j-fee[i]], sum[i][j]=sum[i-1][j-fee[i]]+fee[i];
    else
    dp[i][j]=dp[i-1][j], sum[i][j]=sum[i-1][j];
   }
   else
    dp[i][j]=dp[i-1][j], sum[i][j]=sum[i-1][j];
  }
 }

 for(i=0;i<=m;i++)
 {
     if(max1<dp[n][i])
     {
         max1=dp[n][i];
         max2=sum[n][i];
     }
 }
 printf("%d %d\n",max2,max1);

 scanf("%d%d",&m,&n);
}

return 0;
}
