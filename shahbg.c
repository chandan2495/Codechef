#include<stdio.h>

int main()
{
int p[30000]={0},q,group=0,i,a[30000];
scanf("%d",&q);

for(i=0;i<q;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<q;i++)
{
p[a[i]]=1;
group++;
if(a[i]>0&&p[a[i]-1]==1)
group--;
if(p[a[i]+1]==1)
group--;

printf("%d\n",group);
}
printf("Justice\n");
return 0;
}
