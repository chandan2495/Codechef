#include<stdio.h>
#include<math.h>

#define mod 1000000009
typedef long long ll;

ll mul(ll a,ll b)
{
 ll x=0,y=a%mod,c=mod;
 while(b>0)
 {
  if(b&1==1)
  {
  x=(x+y)%c;
  }
  y=(y<<1)%c;
  b>>=1;
 }
 return x%c;
}

int main()
{
int k,temp,i,temp1,j,l=1;
ll temp2=1;
scanf("%d",&k);
temp=pow(2,k);
temp1=pow(2,k-1);
for(i=1;i<temp1;i++)
{
 printf("0\n");
}
for(j=1;j<=(temp/2);j++)
temp2=(temp2*j)%mod;

temp2=(temp2*temp2)%mod;
temp2=(2*temp2)%mod;
while(i<=temp)
{
 printf("i %d l %d %lld\n",i,l,temp2%mod);
 //printf("a %f\n",temp2*(i/(double)l));
 //
 //printf("dd %d %d aa%lld",i,l,(long long)(temp2*(i/(double)l)));
 temp2=(long long)temp2*(i/(double)l);
 temp2=temp2%mod;
 l++;
 i++;
}
return 0;
}
