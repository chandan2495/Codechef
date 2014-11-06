#include<stdio.h>
#include<math.h>

int a[10001]={0},p[10000];
int main()
{
 int i,t,n,temp,temp1,j,k,b[1001],l,count=0;
 a[0]=a[1]=1;
 k=0;
 for(i=2;i<=sqrt(10000);i++)
 {
  if(a[i]==0)
  {
   for(j=i*i;j<=10000;j+=i)
   a[j]=1;
  }
 }
for(i=0;i<=10000;i++)
 {
     if(a[i]==0)
        p[k++]=i;
 }
 //printf("%d\n",k);
j=1;
 for(i=30;j<1001;i++)
 {
   count=0;
   for(k=0;p[k]<=(i/2);k++)
   {
       if(count>=3)
        break;
       if(i%p[k]==0)
        count++;
   }
   if(count>=3)
   b[j++]=i;
 }

 scanf("%d",&t);

 while(t--)
 {
 scanf("%d",&n);
  printf("%d\n",b[n]);
 }
 return 0;
}
