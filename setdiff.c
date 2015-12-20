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
ll res=0;
scanf("%d",&t);
while(t--)
{
res=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        res+=(power(2,j-i-1)*(a[j]-a[i]));
        if(res>mod)
        res=res%mod;
    }
}
printf("%lld\n",res%mod);
}
return 0;
}
