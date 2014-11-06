#include<stdio.h>

int main()
{
int t;
long long res=0,x,y;
scanf("%d",&t);
while(t--)
{
    res=0;
scanf("%lld%lld",&x,&y);
res=(1+(y-x))*(y-x);
res/=2;
printf("%lld\n",res);
}
return 0;
}
