#include<stdio.h>

#define mod 1000000007
typedef long long ll;
int *a;
int main()
{
int t,n,i;
ll ans;

a=(int*)malloc(sizeof(int)*1000000001);
scanf("%d",&t);
a[1]=1;
for(i=2;i<1000000001;i++)
{
    a[i]=(a[i-1]*2)%mod;
}
while(t--)
{
ans=1;
 scanf("%d",&n);
    printf("%d\n",a[n]);
}
return 0;
}
