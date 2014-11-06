#include<stdio.h>

typedef long long ll;
ll p[100001];
int compare(const void *a, const void *b)
{
    const long long *x = a, *y = b;
    if(*x > *y)
        return 1;
    else
        return (*x < *y) ? -1 : 0;
}
int main()
{
ll t,n,i;
ll mul,res=0;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&p[i]);

qsort(p,n,sizeof(ll),compare);
for(i=1;i<n;i++)
{
    printf("%lld\n",p[i]);
res+=p[0]*p[i];
}
printf("%lld\n",res);
}
return 0;
}
