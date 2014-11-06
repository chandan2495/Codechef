#include<stdio.h>

int main()
{
int t,n,s,f;

scanf("%d",&t);
while(t--)
{
 scanf("%d",&n);
 f=-1;
 for(s=0;s<=n;s+=4)
 {
 f=n-s;
  if(f%7==0)
  break;
 }
 if(f%7==0)
 printf("%d\n",f);
 else
 printf("-1\n");
}
return 0;
}
