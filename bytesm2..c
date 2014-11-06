#include<stdio.h>

int maxx(int a,int b)
{
    return a>b?a:b;
}

int main()
{
int t,h,w,a[100][100],dp[100][100],i,j;
int max;

scanf("%d",&t);

while(t--)
{
max=0;
 scanf("%d%d",&h,&w);

 for(i=0;i<h;i++)
 {
  for(j=0;j<w;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }

 for(j=0;j<w;j++)
 dp[0][j]=a[0][j];

 for(i=1;i<h;i++)
 {
  for(j=0;j<w;j++)
  {
   //scanf("%d",&a[i][j]);
   dp[i][j]=a[i][j]+maxx(maxx(dp[i-1][j],j>0?dp[i-1][j-1]:0),j<w-1?dp[i-1][j+1]:0);
   if(i==h-1)
   {
       if(max<dp[i][j])
        max=dp[i][j];
   }
  }
 }

 printf("%d\n",max);
}

return 0;
}
