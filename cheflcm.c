#include<stdio.h>
typedef unsigned long long ll;
ll power(int a,int b)
{
    ll res=1;
    while(b>0)
        res*=a,b--;

    return res;
}

int main()
{
int t,n,a[100010]={0},b[100000],i,j,pcount=0;
int temp,count;
ll sum=0,pro;
scanf("%d",&t);
a[0]=a[1]=1;
for(i=2;i*i<=100000;i++)
{
 if(a[i]==0)
 {
  for(j=i*i;j<=100000;j+=i)
  a[j]=1;
 }
}
j=0;
for(i=0;i<=100000;i++)
if(a[i]==0)
b[j++]=i;

pcount=j;
while(t--)
{
 scanf("%d",&n);

 sum=1ll;
 pro=1ll;
 if(n>1)
 {
 for(i=0;i<pcount&&b[i]<=(n/2);i++)
 {
  count=0;
  if(n%b[i]==0)
  {
   temp=n;
   while(temp%b[i]==0)
   temp/=b[i],count++;
   pro*=power(b[i],count);
   sum*=((power(b[i],count+1)-1ll)/(b[i]-1ll));
   //printf("%d %d %llu\n",b[i],count,sum);
  }
 }
 if(sum==1)
    sum=n+1;
 else
 {
     if(pro!=n)
     {
         sum*=(power((n/pro),2)-1)/((n/pro)-1);
         //printf("%lld %lld %lld\n",pro,n/pro,sum);
     }
 }
 }
 else
    sum=1;
 printf("%llu\n",sum);
}


return 0;
}
