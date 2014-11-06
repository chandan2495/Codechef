#include<stdio.h>
#include<math.h>

typedef long long ll;
ll cal(int a[],int n,int base)
{
int i=0,j=0;
ll sum=0;
while(i<n)
{
sum+=a[i]*pow(base,j);
i++;
j++;
}
return sum;
}
int main()
{
int t,a,b,basea,baseb,a1[10],b1[10],i,n1,n2;
ll tena,tenb,sum=0;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&a,&b);
 i=0;basea=-1;
 while(a>0)
 {
 a1[i]=a%10;
 if(a1[i]>basea)
 basea=a1[i];
 a/=10;
 i++;
 }
 n1=i;
 i=0;baseb=-1;
 while(b>0)
 {
 b1[i]=b%10;
 if(b1[i]>baseb)
 baseb=b1[i];
 b/=10;
 i++;
 }

 n2=i;
 tena=cal(a1,n1,basea+1);
 tenb=cal(b1,n2,baseb+1);

 sum=tena+tenb;
 printf("%lld\n",sum);
}
return 0;
}
