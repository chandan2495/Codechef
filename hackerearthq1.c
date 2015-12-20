#include<stdio.h>

typedef long long ll;

typedef struct a1{
int d;
int r;
int pr;
}a2;
a2 a[100010];

int compare(a2 *a,a2 *b)
{
    return (*b).d-(*a).d;
}

ll abs(ll a)
{
return a<0?-a:a;
}

int main()
{
int n,i;
ll currsum=0,needed=0;
scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d%d",&a[i].d,&a[i].r);
a[i].pr=a[i].r-a[i].d;
}

qsort(a,n,sizeof(a2),compare);
needed+=a[0].d;
currsum+=a[0].r;
for(i=1;i<n;i++)
{
    if(a[i].d<=currsum)
    {
        currsum-=a[i].d;
        currsum+=a[i].r;
    }
    else
    {
        needed+=(a[i].d-currsum);
        currsum+=a[i].r;
    }
}
printf("%lld\n",needed);
return 0;
}
