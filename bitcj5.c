#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
int t,n,a[2000],k,i,count[2000]={0},j,vis[2000]={0},c=0,min;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&n,&k);
 for(i=0;i<1010;i++)
    vis[i]=0;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 min=INT_MAX;
 for(i=0;i<n;i++)
 {
 if(vis[i]==0){
 vis[i]=1;c=1;
  for(j=i+1;j<n;j++)
  {
   if(vis[j]==0&&a[i]==a[j])
   {
    c++;
    vis[j]=1;
   }
  }
  if(c==k){
  min=0;break;
  }
  else if(c>k)
  {
   min=min>abs(c-k)?abs(c-k):min;
  }
  else if(c<k)
  {
    if(abs(n-c)>=abs(k-c))
    min=min>abs(c-k)?abs(c-k):min;
  }
 }
 }
 printf("%d\n",min);
}
return 0;
}
