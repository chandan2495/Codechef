#include<stdio.h>

typedef long long ll;

typedef struct sum1{
 int l;
 int r;
 ll sum;
}sum2;

sum2 sum[100010];
ll temp[100010]={0},temp2[100010]={0};
int main()
{
int n,a[100010],l,r,q,x,y,m,n1,type,i,j;
ll res;

scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    if(i>1)
    temp[i]+=temp[i-1]+a[i];
    else
    temp[i]=a[i];
}

for(i=1;i<=n;i++){
    scanf("%d%d",&l,&r);
    sum[i].sum=0;
    sum[i].l=l;
    sum[i].r=r;
    if(l==1)
    sum[i].sum=temp[r];
    else
    sum[i].sum=temp[r]-temp[l-1];

    if(i>1)
    temp2[i]+=temp2[i-1]+sum[i].sum;
    else
    temp2[i]=sum[i].sum;
}

scanf("%d",&q);
while(q--)
{
    scanf("%d",&type);
    if(type==1)
    {
        scanf("%d%d",&x,&y);

        for(i=1;i<=n;i++)
        {
            if(sum[i].l<=x&&sum[i].r>=x){
                sum[i].sum=sum[i].sum+y-a[x];
            }
            if(i>1)
            temp2[i]=temp2[i-1]+sum[i].sum;
            else
            temp2[i]=sum[i].sum;
        }
        a[x]=y;
    }
    else
    {
        scanf("%d%d",&m,&n1);
        res=0;
        if(m==1)
        res=temp2[n1];
        else
        res=temp2[n1]-temp2[m-1];

            printf("%lld\n",res);
    }
}


return 0;
}
