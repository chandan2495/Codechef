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
int t,a,b,ba,bb,a1[10],b1[10],i,n1,n2;
ll tena,tenb,sum=0;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&a,&b);
 i=0;basea=-1;
 while(a>0)
 {
 a[i]=n%10;
 if(a[i]>basea)
 basea=a[i];
 a/=10;
 i++;
 }
 n1=i;
 i=0;baseb=-1;
 while(b>0)
 {
 b[i]=n%10;
 if(b[i]>baseb)
 baseb=b[i];
 b/=10;
 i++;
 }
 n2=i;
 if(basea<10)
 tena=cal(a,n,basea);
 if(baseb<10)
 tenb=cal(b,n,baseb);

 sum=tena+tenb;
 printf("%lld\n",sum);
}
return 0;
}
