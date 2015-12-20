#include<stdio.h>

#define mod 1000000007
typedef long long ll;

ll power(int a,int b)
{
    ll res=1LL;
    while(b>0){
        res=(res*a);
        if(res>mod)
            res=res%mod;
        b--;
    }
    return res;
}

int compare(int *a,int *b)
{
    return *a-*b;
}

int main()
{
int t,n,a[100010],i,j;
ll res=0,in=0,dec=0;
scanf("%d",&t);
while(t--)
{
res=in=dec=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);
for(i=0;i<n;i++)
{
 in=(2*in+a[i])%mod;
 dec=(2*dec+a[n-i-1])%mod;
}
res=(dec+mod-in)%mod;
printf("%lld\n",res%mod);
}
return 0;
}
