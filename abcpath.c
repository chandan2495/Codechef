#include<stdio.h>

int maxx(int a,int b)
{
    return a>b?a:b;
}

int main()
{
int h,w,i,j,max,temp,ca=1;
int dp[100][100];
char a[100][100];
scanf("%d%d\n",&h,&w);

while(h!=0&&w!=0)
{
 for(i=0;i<h;i++)
 {
  for(j=0;j<w;j++)
  {
   scanf("%c",&a[i][j]);
   dp[i][j]=1;
  }
  getchar();
 }
//printf("%c",a[0][1]);

/*for(i=0;i<h;i++)
 {
  for(j=0;j<w;j++)
  {
      printf("%c ",a[i][j]);
  }
  printf("\n");
 }
*/
max=0;
 for(i=0;i<h;i++)
 {
  for(j=0;j<w;j++)
  {
      temp=0;
    if(i>0&&a[i-1][j]+1==a[i][j])
        temp=maxx(temp,dp[i-1][j]);
    if(i>0&&j>0&&a[i-1][j-1]+1==a[i][j])
        temp=maxx(temp,dp[i-1][j-1]);
    if(i>0&&j<w-1&&a[i-1][j+1]+1==a[i][j])
        temp=maxx(temp,dp[i-1][j+1]);
    if(j>0&&a[i][j-1]+1==a[i][j])
        temp=maxx(temp,dp[i][j-1]);

    dp[i][j]+=temp;
        if(dp[i][j]>max)
            max=dp[i][j];
  }
 }
/*
 for(i=0;i<h;i++)
 {
  for(j=0;j<w;j++)
  {
      printf("%d ",dp[i][j]);
  }
  printf("\n");
 }
*/
 printf("Case %d: %d\n",ca,max);
 ca++;
 scanf("%d%d",&h,&w);
 getchar();
}
return 0;

}
