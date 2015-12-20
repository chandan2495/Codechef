#include<stdio.h>

typedef long long ll;
int a[600000]={0};
int main()
{
int t,n,i,j,r,l;
ll sum=0;
scanf("%d",&t);
a[0]=a[1]=1;
for(i=2;i<=sqrt(600000);i++)
{
    if(a[i]==0)
    {
     for(j=i*i;j<=600000;j+=i)
     a[j]=1;
    }
}

while(t--)
{
scanf("%d",&n);
r=(n*(n+1))/2;
sum=0;
for(i=r;i>(r-n);i--)
sum+=(a[i]==0?i:0);

printf("%lld\n",sum);
}

return 0;
}
