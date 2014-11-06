#include<stdio.h>

int main()
{
int n,m,a[100100],x,i,has[10]={0},temp=0,sum[100100]={0},count[100100]={0};
int counts=0,sums[100100]={0},j,allsum=0;
char s1[100100];
scanf("%d%d\n",&n,&m);

scanf("%s",s1);
i=0;
while(s1[i])
{
    temp=0,counts=0;
 a[i]=s1[i]-'0';
 allsum+=a[i];
 sums[i]=allsum;
 for(j=a[i]+1;j<10;j++)
 {
  if(has[j]>0)
  {
   temp+=has[j]*j;
   counts+=has[j];
  }
 }
 has[a[i]]++;
 sum[i]=temp;
 count[i]=counts;
 printf("%d %d %d %d\n",a[i],sum[i],count[i],sums[i]);
 i++;
}

while(m--){
scanf("%d",&x);
temp=a[x-1]*x-sums[x-1];
temp=temp-2*a[x-1]*count[x-1]+2*sum[x-1];

printf("%d\n",temp);
}
return 0;
}
