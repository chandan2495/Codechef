#include<stdio.h>
#include<string.h>

#define INF 11111111
int n,a[150],minsum=11111111,memo[101][10001];

int min(int a,int b)
{
    return a>b?b:a;
}

int coincal(int i,int x,int count)
{
    if(x==0){
        return count;
    }
    if(i==n||x<0)
        return INF;
    return min(coincal(i+1,x,count),coincal(i,x-a[i],count+1));
}

int main()
{
int t,x,i,res;

scanf("%d",&t);
while(t--)
{
    minsum=11111111;
    memset(memo,-1,sizeof(memo));
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    res=coincal(0,x,0);
    if(res<INF){
        printf("%d\n",res);
    }
    else
        printf("No solution\n");
}

return 0;
}
