#include<stdio.h>
#include<string.h>

int a[1001][1001];
int main()
{
int t,n,m,x,y,count,count1,i,j,k;
scanf("%d",&t);
while(t--)
{
    count=0;
memset(a,0,sizeof(a));
scanf("%d%d",&n,&m);

for(k=1;k<=m;k++)
{
 scanf("%d%d",&x,&y);
 for(i=1;i<=n;i++){
 if(a[x][i]==0)
 a[x][i]=1;
 }
 for(i=1;i<=n;i++){
 if(a[i][y]==0)
 a[i][y]=1;
 }
 for(i=x,j=y;i>=1&&j>=1;i--,j--){
 if(a[i][j]==0)
 a[i][j]=1;
 }
 for(i=x,j=y;i<=n&&j>=1;i++,j--){
 if(a[i][j]==0)
 a[i][j]=1;
 }

 for(i=x,j=y;i>=1&&j<=n;i--,j++){
 if(a[i][j]==0)
 a[i][j]=1;
 }

 for(i=x,j=y;i<=n&&j<=n;i++,j++){
 if(a[i][j]==0)
 a[i][j]=1;
 }

 a[x][y]=2;
}

/*for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("%d ",a[i][j]);
    }
printf("\n");
}*/

for(i=1;i<=n;i++)
{
    count1=0;
    for(j=1;j<=n;j++)
    {
        count1=0;
        if(a[i][j]==0)
        {
            if(i<n&&j<n-1&&a[i+1][j+2]==2)
                count1++;
            if(i<n&&j>2&&a[i+1][j-2]==2)
                count1++;
            if(i>1&&j<n-1&&a[i-1][j+2]==2)
                count1++;
            if(i>1&&j>2&&a[i-1][j-2]==2)
                count1++;
            if(i<n-1&&j<n&&a[i+2][j+1]==2)
                count1++;
            if(i<n-1&&j>1&&a[i+2][j-1]==2)
                count1++;
            if(i>2&&j<n&&a[i-2][j+1]==2)
                count1++;
            if(i>2&&j>1&&a[i-2][j-1]==2)
                count1++;
               // printf("%d %d %d\n",i,j,count1);
        }
        if(count1>1)
            count++;
    }
}
printf("%d\n",count);
}
return 0;
}
