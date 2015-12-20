#include<stdio.h>

int a[1000010];
int main()
{
int n,k,i,max,pos,j;

scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);

max=0;

for(i=0;i<k;i++)
{
 if(a[i]>max)
 max=a[i],pos=i;
}
printf("%d ",max);
for(i=k;i<n;i++)
{
 if((i-k+1)>pos)
 max=0;
 if(a[i]>max)
 max=a[i],pos=i;

 printf("%d ",max);
}
printf("\n");
return 0;
}
