#include<stdio.h>
#include<limits.h>

int main()
{
int t,n,v[101],i,min=INT_MAX,v1,v2,monk,j;
scanf("%d",&t);
while(t--)
{
min=INT_MAX;
monk=INT_MAX;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&v[i]);

if(n<3)
{
 if(v[0]>v[1])
 monk=v[0], min=v[1];
 else
 monk=v[1],min=v[0];
}
else{
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(i!=j)
  {
   if(abs(v[i]-v[j])<min)
   {
    min=abs(v[i]-v[j]);
    v1=i;
    v2=j;
   }
  }
 }
}
for(i=0;i<n;i++)
{
 if(v1!=i&&v2!=i)
 {
  if(v[i]<monk)
  monk=v[i];
 }
}
}
printf("%d %d\n",min,monk);
}
return 0;
}
