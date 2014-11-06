#include<stdio.h>
#include<math.h>

typedef unsigned long long ll;
int a[1000001]={0},b[1000001];
int main()
{
int t,temp,j,pr,temp1,k;
ll res=0,p,n,i;
a[0]=a[1]=1;
temp=sqrt(1000000);
k=0;
for(i=2;i<=temp;i++)
{
    if(a[i]==0){
        b[k++]=i;
    for(j=i*i;j<=1000000;j=j+i)
    a[j]=1;
    }
}
pr=k;
scanf("%d",&t);
while(t--)
{
res=0;
scanf("%llu%llu",&n,&p);
temp=n/2;
temp1=n;
for(i=0;b[i]<=n;i++)
{
res=(res+b[i])%p;
}
printf("%llu\n",res%p);
}
return 0;
}
