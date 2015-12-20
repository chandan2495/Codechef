#include<stdio.h>

int main()
{
int t,n,m,q,a,f[6]={0,1,4,108,27648,86400000},res;

scanf("%d",&t);
while(t--)
{

 scanf("%d%d%d",&n,&m,&q);
 while(q--)
 {
    scanf("%d",&a);

    res=f[n]/(f[n-a]*f[a]);

    printf("%d\n",res%m);
 }
}

return 0;
}
