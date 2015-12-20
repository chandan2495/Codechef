#include<stdio.h>
#include<string.h>

#define NN 99

int a[101][101],count=0,memo[101][101];

int max(int a,int b)
{
    return a>b?a:b;
}

int maxx(int a,int b,int c)
{
    return max(max(a,b),c);
}
/*
int calc(int i,int j,int sum)
{

    if(i==NN+1&&j<=i){
            count++;
        return sum;
    }
    if(i<0||j<0||i>NN||j>i)
        return 0;

    if(memo[i][j]==-1){
  //  printf("%d ",a[i][j]);
        sum+=a[i][j];
        memo[i+1][j]=calc(i+1,j,sum);
        memo[i+1][j+1]=calc(i+1,j+1,sum);
        memo[i][j]=max(memo[i+1][j],memo[i+1][j+1]);
    }
    return memo[i][j];
}
*/

int main()
{
int i,j;

memset(memo,-1,sizeof(memo));
for(i=0;i<=NN;i++)
{
    for(j=0;j<=i;j++)
    scanf("%d",&a[i][j]);
}

for(i=NN-1;i>=0;i--)
{
    for(j=0;j<=i;j++){
    //printf("%d %d %d\n",a[i][j],a[i+1][j],a[i+1][j+1]);
    a[i][j]+=max(a[i+1][j],(j+1<=i+1?a[i+1][j+1]:0));
    }
}

printf("%d\n",a[0][0]);

return 0;
}
