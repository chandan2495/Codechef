#include<stdio.h>
#include<limits.h>

int main()
{
int t,n,m,a[100100],i,j,count,maxcount,sum,minsum;
int left;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 maxcount=count=0; minsum=INT_MAX; sum=0;
 left=0;
 for(i=0;i<n;i++)
 {
  if(a[i]>m)
  {
      sum=0; count=0; left=i+1;
      continue;
  }
  sum+=a[i];
  if(sum<=m)
  {
   count++;
   if(count>maxcount){
   maxcount=count;
   minsum=sum;
   }
   else if(count==maxcount)
   {
       if(minsum>sum)
        minsum=sum;
   }
  }
  else
  {count++;
   while(sum>m&&left<i)
   {
    sum-=a[left];
    left++;
    count--;
   }
   if(sum<=m)
   {
   if(count>maxcount){
   maxcount=count;
   minsum=sum;
   }
   else if(count==maxcount)
   {
       if(sum<minsum)
        minsum=sum;
   }
   }
  }
 }
 if(minsum!=INT_MAX)
 printf("%d %d\n",minsum,maxcount);
 else
    printf("0 0\n");
}

return 0;
}
