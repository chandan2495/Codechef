#include<stdio.h>

int main()
{
int t,b,a[10010]={0},i,j=1,k=2;
for(i=3;i<10001;i+=2,j+=k,k++)
a[i]=a[i+1]=j;

scanf("%d",&t);
while(t--)
{
 scanf("%d",&b);
 printf("%d\n",a[b-1]);
}
return 0;
}
