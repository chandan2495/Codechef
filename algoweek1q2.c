#include<stdio.h>

#define e 0.000001
struct a1{
 int w;
 int l;
 double d;
};
struct a1 a[10010];

int compare(struct a1 *a,struct a1 *b)
{
    if(((*b).d-(*a).d)>e)
        return 1;
    else if(((*b).d-(*a).d)<e)
        return -1;
    else
        return 0;
}

int main()
{
int n,i;
long long sum=0,com=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i].w,&a[i].l);
a[i].d=(double)a[i].w/(double)a[i].l;
}
qsort(a,n,sizeof(struct a1),compare);
com=a[0].l;
sum+=(a[0].w*com);
for(i=1;i<n;i++)
{
 com+=a[i].l;
 sum+=(a[i].w*com);
}

printf("%lld\n",sum);
return 0;
}
