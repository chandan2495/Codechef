#include<stdio.h>
#include<string.h>

int maxx(int a,int b)
{
    return a>b?a:b;
}
int a[1111],b[1002][1002],c[1002][1002];
struct d1{
    int a;
    int co;
    int po;
};
struct d1 d[1010];
int compare(struct d1 *a,struct d1 *b)
{
    return (*b).a-(*a).a;
}
int main()
{
int t,k,n,m,i,j,max,pos;
long long total=0;
scanf("%d",&t);
while(t--)
{
    memset(d,0,sizeof(d));
    total=0;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&c[i][j]);
    }
    for(i=0;i<n;i++)
    {
        max=-1; pos=0;
        for(j=0;j<m;j++)
        {
            b[i][j]-=c[i][j];
            if(max<b[i][j])
            {
                max=b[i][j];
                pos=j;
            }
        }
        d[i].a=maxx(b[i][a[i]-1],max-b[i][a[i]-1]);
        d[i].co=pos;
        d[i].po=i;
    }

qsort(d,n,sizeof(struct d1),compare);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
 printf("%d ",b[i][j]);
 printf("\n");
}
printf("\n");
for(i=0;i<n;i++)
    printf("%d %d %d\n",d[i].a,d[i].co,d[i].po);
printf("\n");
for(i=0;i<n||k>0;i++,k--)
{
    total+=d[i].a;
}
printf("%lld\n",total);
}
return 0;
}
