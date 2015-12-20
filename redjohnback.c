#include<stdio.h>
#include<string.h>

int memo[50],a[1000010]={0},pr[100000];

int redjohn(int n)
{
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(memo[n]==-1)
        memo[n]=redjohn(n-4)+redjohn(n-1);
    return memo[n];
}

int main()
{
int t,n,res,i,j,pcount=0,mid,flag=0;

scanf("%d",&t);
a[0]=a[1]=1;
for(i=2;i*i<=1000000;i++)
{
    if(a[i]==0)
    {
        for(j=i*i;j<=1000000;j+=i)
            a[j]=1;
    }
}
j=0;
for(i=2;i<=1000000;i++)
    if(a[i]==0)
        pr[j++]=i;
pcount=j;
while(t--)
{
memset(memo,-1,sizeof(memo));
scanf("%d",&n);
res=redjohn(n);
if(res==1){
    printf("0\n");
}
else{
i=0,j=pcount-1;
while(i<=j)
{
    mid=(i+j)/2;
    if(pr[mid]<=res&&(mid+1<pcount&&pr[mid+1]>res))
        break;
    else if(pr[mid]<res)
        i=mid+1;
    else
        j=mid-1;
}
printf("%d\n",mid+1);
}
}

return 0;
}
