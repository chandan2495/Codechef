#include<stdio.h>

int main()
{
int t,s,q,trc=0,trl=0,res;

scanf("%d%d%d",&t,&s,&q);
trc=q>t?q:(t/(q-1));
trl=q>s?q:(s/(q-1));

res=trc/trl;
printf("%d\n",res);
return 0;
}
