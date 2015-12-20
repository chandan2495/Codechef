#include<stdio.h>
#include<string.h>

int gcd(int a,int b)
{
return b?gcd(b,a%b):a;
}

int main()
{
int t,n,m,a[300],d[300][300],i,j,p1,p2,vis[300],count,res=0;
int maxi,maxj,max,maxi1,maxi2,maxj1,maxj2,max1,max2;
scanf("%d",&t);
while(t--)
{
    memset(d,0,sizeof(d));
    memset(vis,0,sizeof(vis));
    scanf("%d%d",&n,&m);
    for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);

    for(i=0;i<m;i++)
    {
       scanf("%d%d",&p1,&p2);
       d[p1-1][p2-1]=d[p2-1][p1-1]=gcd(a[p1-1],a[p2-1]);
    }

    /*for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++)
         printf("%d ",d[i][j]);
         printf("\n");
    }*/

    count=0;res=0;
    while(count<n-1)
    {
        max=0;
        for(i=0;i<n-1;i++)
        {
            if(vis[i]==0){
            for(j=0;j<n-1;j++)
            {
                if(vis[j]==0)
                {
                    if(d[i][j]!=0&&max<d[i][j])
                    {
                        max=d[i][j];
                        maxi=i;
                        maxj=j;
                    }
                }
            }
            }
        }
        count+=2;
        max1=max2=0;
        for(i=0;i<n-1;i++)
        {
            if(vis[i]==0&&i!=maxj){
            if(d[i][maxi]!=0&&max1<d[i][maxi])
            {
                max1=d[i][maxi];
                maxi1=maxi;
                maxj1=i;
            }
            }
        }

        for(i=0;i<n-1;i++)
        {
            if(vis[i]==0&&i!=maxi){
            if(d[i][maxj]!=0&&max2<d[i][maxj])
            {
                max2=d[i][maxj];
                maxi2=maxj;
                maxj2=i;
            }
            }
        }
        if((max1+max2)<=max){

        vis[maxi]=vis[maxj]=1;
        res+=max;
        }
        else
        {
            vis[maxi1]=vis[maxi2]=vis[maxj1]=vis[maxj2]=1;
            res+=max1+max2;
        }
    }

    printf("%d\n",res);
}

return 0;
}
