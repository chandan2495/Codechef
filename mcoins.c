#include<stdio.h>

int dp[1000100];
int main(){

int k,l,m,i,a,b,c,n;

scanf("%d%d%d",&k,&l,&m);
dp[1]=dp[k]=dp[l]=1;

for(i=2;i<1000001;i++)
{
if(dp[i]==0){
a=b=c=0;
 if(i-1>0)
 a=dp[i-1];
 if(i-k>0)
 b=dp[i-k];
 if(i-l>0)
 c=dp[i-l];

 if(a==1&&(b==1||b==0)&&(c==1||c==0))
 dp[i]=2;
 else
 dp[i]=1;
}
}
while(m--)
{
scanf("%d",&n);
printf("%c",dp[n]-1+'A');
}
return 0;
}
