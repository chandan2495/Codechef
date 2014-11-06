#include<stdio.h>

int maxlength(int a[],int n)
{
int i,j,count=0,max=0,temp;
for(i=0;i<n-1;i++)
{
temp=a[i];
count=1;
 for(j=i+1;j<n;j++)
 {
  if(a[j]!=temp+1)
  break;
  temp++;
  count++;
 }
 if(count>max)
 max=count;
}
return max;
}

int main()
{
int n,m,a[100020],i,j,count=0,x,y;

scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("%d\n",maxlength(a,n));
for(i=0;i<m;i++)
{
 scanf("%d%d",&x,&y);
 a[x-1]=y;
 printf("%d\n",maxlength(a,n));
}
return 0;
}
