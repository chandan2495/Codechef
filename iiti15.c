#include<stdio.h>
#include<malloc.h>
typedef long long ll;

int main()
{
int t,*a,n,i,q,l,r,*b;
char c1,c2;
ll res;

n=get_int();
a=(int*)malloc(sizeof(int)*n);
b=(int*)malloc(sizeof(int)*n);
temp=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
a[i]=get_int();
b[i]=0;
}


scanf("%d",&q);
while(q--){
scanf("%d%d",&l,&r);
for(i=l-1;i<r;i++)
{

}
printf("%lld\n",res);
}
return 0;
}


