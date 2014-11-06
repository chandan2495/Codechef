#include<stdio.h>
#include<string.h>
#define mod 1000000

typedef long long ll;
int temp[1000001];

ll abss(ll a)
{
return a<0?-a:a;
}

ll mul(ll a,ll b)
{
ll x=0,y=a%mod,c=mod;
while(b>0)
{
if(b&1==1)
{
x=(x%c+y%c)%c;
}
y=(y<<1)%c;
b>>=1;
}
return x%c;
}
int main()
{
int t,n,i,j,max,k;
ll sum1,sum2,temp1,a,b,c,d;
//t=getint();
scanf("%d",&t);
while(t--)
{
memset(temp,0,sizeof(temp));
sum1=0, sum2=0; j=0; max=0;
scanf("%d%lld%lld%lld%lld",&n,&a,&b,&c,&d);
temp1=d;
temp[d]++;
if(max<d)
max=d;
for(i=1;i<n;i++)
{
//temp1=(mul(a,mul(temp1,temp1))+mul(b,temp1)+c)%mod;
//temp1=((a*(temp1*temp1)%mod)%mod+(b*temp1)%mod+c)%mod;
temp[i]=((temp[i-1]*(a*temp[i-1]+b)%mod)%mod+c)%mod;
temp[temp1]++;
if(max<temp1)
max=temp1;
}
//qsort(temp,j,sizeof(int),compare);
k=0;
for(i=max;i>=0;i--)
{
if(temp[i]!=0){
if(k%2==0){
        if(temp[i]>1)
        {
         if(temp[i]%2==0)
         {
             sum1+=(temp[i]/2)*i;
             sum2+=(temp[i]/2)*i;
            // k++;
         }
         else{
            sum1
         }
        }
        else
        sum1+=i;
}
else
sum2+=i;

}
}

printf("%lld\n",abss(sum1-sum2));
}
return 0;
}
