#include<stdio.h>

int main()
{
int n,m;
scanf("%d%d",&n,&m);

if(n==m)
printf("%d\n",n+1);
else
printf("%d\n",n+(n/m)+1);

return 0;
}
