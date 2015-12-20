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

lt[0]=a[0];
rt[n-1]=a[n-1];
for(i=1,j=n-2;i<n,j>=0;j--,i++)
{
lt[i]=gcd(a[i],lt[i-1]);
rt[j]=gcd(a[j],rt[j+1]);
}

for(i=0;i<n;i++)
    printf("%d ",lt[i]);

for(i=0;i<n;i++)
    printf("%d ",rt[i]);



while(q--)
{
 scanf("%d%d",&l,&r);
 l--,r--;
 if(l>0&&r<n-1)
 res=gcd(lt[l-1],rt[r+1]);
 else if(l==0&&r<n-1)
 res=rt[r+1];
 else
 res=lt[l-1];

 printf("%d\n",res);
}

}

return 0;
}
