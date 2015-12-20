#include<stdio.h>

typedef long long ll;
int a[10000100]={0},pr[1000010];

ll power(ll a,int b)
{
    ll res=1;
    while(b>0)
        res*=a,b--;

    return res;
}

int main()
{
int t,i,j,flag=0,count=0;
ll n1,n2,temp,pro;
a[0]=a[1]=1;
for(i=2;i*i<=10000000;i++)
{
    if(a[i]==0)
    {
        for(j=i*i;j<=10000000;j+=i)
        a[j]=1;
    }
}
j=0;
for(i=2;i<=10000000;i++)
if(a[i]==0)
pr[j++]=i;

scanf("%d",&t);
while(t--)
{
    scanf("%lld%lld",&n1,&n2);
    flag=0; pro=1;
    for(i=0;i<j&&pr[i]<=(n2/2);i++)
    {
        count=0;
      if(n2%pr[i]==0)
      {
       temp=n2;
       //while(temp%pr[i]==0)
       //temp/=pr[i],count++;
      // pro*=power(pr[i],count);
       if(n1%pr[i]!=0){
       flag=1;
       break;
       }
      }
    }
    if(flag==1)
    printf("NO\n");
    else
    {
        printf("YES\n");
    }
}
return 0;
}
