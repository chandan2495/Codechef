#include<stdio.h>

int main()
{
int te,n,w[52],t[52],max,temp,i;

scanf("%d",&te);

while(te--)
{
 scanf("%d",&n);

 for(i=0;i<n;i++)
 scanf("%d",&w[i]);
  for(i=0;i<n;i++)
 scanf("%d",&t[i]);
 max=0;
  for(i=0;i<n;i++)
  {
   temp=w[i]*3+t[i];
   if(temp>max)
   max=temp;
  }
printf("%d\n",max);
}
}
