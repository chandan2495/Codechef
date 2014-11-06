#include<stdio.h>

int main()
{
int t,n,m;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&m);
if(n==1&&m==1)
    printf("0\n");
printf("%d\n",n*m);
}
return 0;
}
