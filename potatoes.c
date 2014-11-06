#include<stdio.h>
#include<math.h>
int main()
{
int i,j,a[10001]={0},t,x,y,temp;

scanf("%d",&t);
a[0]=a[1]=1;
temp=sqrt(10001);
for(i=2;i<=temp;i++)
{
 if(a[i]==0)
 {
  for(j=i*i;j<=10001;j=j+i)
  a[j]=1;
 }
}
while(t--)
{
 scanf("%d%d",&x,&y);
 for(i=(x+y)+1;;i++)
 {
 if(a[i]==0)
 break;
 }
 printf("%d\n",i-(x+y));
}
}
