#include<stdio.h>

int a[1000010]={0},pr[100000];
int main()
{
int i,j,n,sum,count=0,pro,temp,k,res=0;
a[0]=a[1]=1;
for(i=2;i<=1000010;i++)
{
    if(a[i]==0)
    {
        for(j=i;j<=1000010;j+=i)
        a[j]+=i;
    }
}
scanf("%d%d",&n,&k);
for(i=2;i<=n;i++)
{
    if(a[i]==k){
        res++;
    }
}
printf("%d\n",res);
return 0;
}
