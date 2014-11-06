#include<stdio.h>

int main()
{
int t,n,m,a[1500],i,j,b,chef[1500],assi[1500];
int c,as;
scanf("%d",&t);
while(t--)
{
memset(a,0,sizeof(a));
 scanf("%d%d",&n,&m);
 for(i=0;i<m;i++)
 {
 scanf("%d",&b);
 a[b]=1;
 }
 j=1;c=0,as=0;
 for(i=1;i<=n;i++)
 {
  if(a[i]!=1&&j%2==1){
  chef[c++]=i;
  j++;
  }
  else if(a[i]!=1){
  assi[as++]=i;
  j++;
  }
 }
 for(i=0;i<c;i++)
 printf("%d ",chef[i]);
 printf("\n");
 for(i=0;i<as;i++)
 printf("%d ",assi[i]);
 printf("\n");
}
return 0;
}
