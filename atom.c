#include<stdio.h>

typedef long long ll;

int main()
{
int t;
ll n,k,m,res=1,t1=0,temp=0;
scanf("%d",&t);
while(t--)
{
    t1=0;
scanf("%lld%lld%lld",&n,&k,&m);
res=m/n;
if(res>0){
        temp=k;
while(res>=temp)
{
    t1++;
    temp=temp*k;
    if(temp<0)
    break;
}
}
printf("%lld\n",t1);
}
return 0;
}
