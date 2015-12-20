#include<stdio.h>
#include<string.h>

int main()
{
int t,n,c[100],sum=0,i,flag=0,d[100],j;

scanf("%d",&t);
while(t--)
{
 flag=0;sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&c[i]);
  if(c[i]==n)
  flag=1;
  sum+=c[i];
  if(sum>n)
  flag=1;

  d[i]=0;
 }

 if(flag==1||sum!=n)
 printf("-1\n");
 else if(n==1)
 {
     printf("-1\n");
 }
 else
 {
 j=0;
  for(i=0;i<n;i++)
  {
   if(c[i]>0)
   {
    j=(i+1)%n;
    while(c[i]>0){
        while(d[j]!=0)
         j=(j+1)%n;
         d[j]=i+1;
         j=(j+1)%n;
         c[i]--;
         }
   }
  }
  for(i=0;i<n;i++){
      if(d[i]==0){
      flag=1;
      break;
      }
  }
  if(flag==0){
  for(i=0;i<n-1;i++){
   printf("%d ",d[i]);
  }
   printf("%d\n",d[i]);
  }
   else
   printf("-1\n");
 }
}

return 0;
}
