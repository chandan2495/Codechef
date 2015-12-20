#include<stdio.h>

struct a1{
 int w;
 int l;
 int d;
};
struct a1 a[10010];

int compare(struct a1 *a,struct a1 *b)
{
    if((*a).d==(*b).d)
    return (*b).w-(*a).w;

    return (*b).d-(*a).d;
}

int main()
{
int n,i;
long long sum=0,com=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i].w,&a[i].l);
a[i].d=a[i].w-a[i].l;
}
qsort(a,n,sizeof(struct a1),compare);
com=a[0].l;
sum+=(a[0].w*com);
for(i=1;i<n;i++)
{
 com+=a[i].l;
 sum+=(a[i].w*com);
 //printf("%lld\n",sum);
}

printf("%lld\n",sum);
return 0;
}
