#include<stdio.h>

#define mod 1000000007
typedef long long ll;

int gcd(int a,int b)
{
 return b?gcd(b,a%b):a;
}

int main()
{
int t,n,a[200100],i,temp,j;
ll pro=1;
scanf("%d",&t);
while(t--)
{
    pro=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    if(i!=j&&a[i]>1&&a[j]>1)
    {
     temp=gcd(a[i],a[j]);
     a[i]=a[i]/temp;
     a[j]=a[j]/temp;
    }
   }
 }
 for(i=0;i<n;i++)
 pro=(pro*a[i])%mod;

 printf("%lld\n",pro);
}
return 0;
}
