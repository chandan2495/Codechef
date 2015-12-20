#include<stdio.h>

int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}

int main()
{
int t,n,q,l,r,a[100010],lt[100010],rt[100010],j,res,i;

scanf("%d",&t);

while(t--)
{
scanf("%d%d",&n,&q);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

while(q--)
{
 scanf("%d%d",&l,&r);
 l--,r--;
 if(l>0){
    res=a[0];
 for(i=1;i<l;i++)
    res=gcd(a[i],res);
 for(i=r+1;i<n;i++)
    res=gcd(a[i],res);
 }
 else
 {
     res=a[r+1];
     for(i=r+2;i<n;i++)
    res=gcd(a[i],res);
 }

 printf("%d\n",res);
}

}

return 0;
}
