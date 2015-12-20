#include<stdio.h>

typedef long long ll;

int main()
{
ll k,n,w,res;
scanf("%I64d%I64d%I64d",&k,&n,&w);

res=((k+w*k)*w)/2LL;
if(res>n)
res=res-n;
else
res=0;

printf("%I64d\n",res);
return 0;
}
