#include<stdio.h>

#define mod 1000000007

int calculate(int k,int n)
{
 if(k>n)
 return 0;
 if(k==n)
 return 1;
 else
 return (calculate(k+1,n)+calculate(k,n-k))%mod;
}

int main()
{
int t,n,res;

scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
res=calculate(1,n);
printf("%d\n",res);
}
return 0;
}
