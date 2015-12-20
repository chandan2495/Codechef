#include<stdio.h>
int a[1000001],sum[1000001];
int main()
{
 int n,q,i,j;
 char s[50];
 scanf("%d%d",&n,&q);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  if(i>0)
  sum[i]=sum[i-1]+a[i];
  else
  sum[i]=a[i];
 }
 while(q--)
 {
  scanf("%s%d%d",s,&i,&j);
  i--,j--;
  if(i==0)
  printf("%d\n",sum[j]);
  else
  {
  printf("%d\n",sum[j]-sum[i-1]);
  }
 }
 return 0;
}
