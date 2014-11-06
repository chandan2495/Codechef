#include<stdio.h>

int main()
{
int n,a[1000]={0},p,q,i;
scanf("%d",&n);
scanf("%d",&p);
while(p--)
{
 scanf("%d",&q);
 a[q]++;
}

scanf("%d",&p);
while(p--)
{
 scanf("%d",&q);
 a[q]++;
}

for(i=1;i<=n;i++)
{
 if(a[i]==0)
 break;
}

if(i==n+1)
printf("I become the guy.");
else
printf("Oh, my keyboard!");

return 0;
}
