#include<stdio.h>

int main()
{
int t,x,b,c,i;
long long res=0,xi,yi;
scanf("%d",&t);
while(t--)
{
res=0;
scanf("%d",&x);
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%lld%lld",&xi,&yi);
res+=yi;
}
scanf("%d",&c);
printf("%lld\n",res+1);
}

return 0;
}
