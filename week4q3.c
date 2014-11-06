#include<stdio.h>

int main()
{
int n,m,k,a[50],temp,i;

scanf("%d%d%d",&n,&m,&k);

for(i=0;i<=n;i++)
scanf("%d",&a[i]);

temp=a[0];

for(i=1;i<=m;i++)
{
 temp=a[i]+temp*k;
}

printf("%d\n",temp);
return 0;
}
