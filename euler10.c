#include<stdio.h>

int a[2000010],b[100010];

int main()
{
int n,i,j=0,k=0;
unsigned long long sum=0;

for(i=2;i<=sqrt(2000000);i++)
{
 if(a[i]==0)
 {

  for(j=i*i;j<=2000001;j+=i)
  a[j]=1;
 }
}

for(i=2;i<=2000000;i++)
{
  if(a[i]==0){
  if(i<=2000000)
    sum+=i;
  }
}
printf("%llu\n",sum);

return 0;
}
