#include<stdio.h>

int main()
{
int n,k,max,i,j,t,count,a[10000];
scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&n,&k);
 count=0;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  if(a[i]%2==0)
  count++;
 }
 if(k!=0&&count>=k)
 printf("YES\n");
 else if(k==0&&count<n)
    printf("YES\n");
 else
 printf("NO\n");
}

return 0;
}
