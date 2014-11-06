#include<stdio.h>

int main()
{
int t,n,a[51],i,j,count,min,temp;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
count=0,min=5000;temp=0;
for(i=0;i<n;i++)
{
count=0;
temp=a[i];
 for(j=i-1;j>=0;j--)
 {

  if(a[j]!=temp-1){
  count++;
  temp--;
  }
 }
 temp=a[i];
 for(j=i+1;j<n;j++)
 {

  if(a[j]!=temp+1){
  count++;
  temp++;
  }
 }


 if(min>count)
 min=count;
}
for(i=n-1;i>=0;i--)
{
count=0;
temp=a[i];
 for(j=i-1;j>=0;j--)
 {

  if(a[j]!=temp-1){
  count++;
  temp--;
  }
 }
 temp=a[i];
 for(j=i+1;j<n;j++)
 {

  if(a[j]!=temp+1){
  count++;
  temp++;
  }
 }


 if(min>count)
 min=count;
}
printf("%d\n",min);
}

return 0;
}
