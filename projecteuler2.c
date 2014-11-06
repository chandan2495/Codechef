#include<stdio.h>
#include<math.h>

typedef long long ll;
int a[1000001],b[100000];
int main()
{
ll n,i,max,n1;
int j,temp,k;
max=0;
scanf("%lld",&n);
n1=n;
temp=sqrt(n);
while(n%2==0){
    n=n/2;
    max=2;
}
for(i=3;i<=temp;i+=2)
{
    while(n%i==0)
    {
        n=n/i;
        max=i;
    }
}
if(max!=0)
printf("%lld\n",max);
else
printf("%lld\n",n1);
return 0;
}
