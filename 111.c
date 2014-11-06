#include<stdio.h>

int max(int a,int b)
{
    return a>b?a:b;
}

int main()
{
int n,index[25],a[25],temp,lcs[25][25],i,j,flag=0,b[25];
int res=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%d",&temp);
 b[temp]=i;
}


for(i=1;i<=n;i++)
    printf("%d ",b[i]);
printf("\n");
while(1)
{
    memset(lcs,0,sizeof(lcs));
for(i=1;i<=n;i++){
if(scanf("%d",&temp)==EOF){
flag=1;break;
}
a[temp]=i;
}

if(flag==1)
    break;

for(i=0;i<=n;i++)
{
    for(j=0;j<=n;j++)
    {
        if(i==0||j==0)
            lcs[i][j]=0;
        else if(a[i-1]==b[i-1])
            lcs[i][j]=1+lcs[i-1][j-1];
        else
            lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
    }
}

printf("%d\n",lcs[n][n]);

}
return 0;
}
