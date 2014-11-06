#include<stdio.h>

int a[300010];
int main()
{
int n,m,currsum,max,left,right,i;

scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

left=right=max=currsum=0;
for(i=0;i<n;i++)
{
currsum+=a[i];
 if(currsum<m)
 {
 right=i;
 if(max<currsum)
 max=currsum;
 }
 else if(currsum==m)
 {
  max=currsum;
  break;
 }
 else
 {
  while(currsum>m&&left<=i)
  {
   currsum-=a[left];
   left++;
  }
  if(max<currsum)
    max=currsum;
  if(currsum==m)
  {
   max=currsum;
   break;
  }
 }
//printf("%d\n",currsum);
}

printf("%d\n",max);
return 0;
}
