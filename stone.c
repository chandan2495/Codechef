#include<stdio.h>
#include<limits.h>

int main()
{
long long n,k,a[100010],i,min,max;
min=INT_MAX;
max=INT_MIN;

//printf("%lld %lld\n",min,max);
scanf("%lld%lld",&n,&k);
for(i=0;i<n;i++)
{
 scanf("%lld",&a[i]);
 if(max<a[i])
 max=a[i];
 if(min>a[i])
 min=a[i];
}
if(k>0){
for(i=0;i<n;i++)
a[i]=max-a[i];
}
max=max-min;
min=0;
if(k%2!=0)
{
 for(i=0;i<n;i++)
 printf("%lld ",a[i]);
}
else
{
 if(k>0){
 for(i=0;i<n;i++)
 a[i]=max-a[i];
 }
for(i=0;i<n;i++)
 printf("%lld ",a[i]);

}

printf("\n");

return 0;
}
