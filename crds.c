#include<stdio.h>

#define mod 1000007
int a[1000100];
int main(){

int t,n,temp,i;
scanf("%d",&t);
a[1]=2;
temp=4;
for(i=2;i<1000001;i++)
{
 a[i]+=(a[i-1]+temp+i-1)%mod;
 temp+=2;
}

while(t--)
{
scanf("%d",&n);
printf("%d\n",a[n]);
}

return 0;
}
