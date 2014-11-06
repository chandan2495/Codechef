#include<stdio.h>

int main()
{
int t,n,x,y,z,ans1,ans2,price,temp,temp1,i,j;

scanf("%d",&t);

while(t--)
{
 scanf("%d",&n);

 scanf("%d%d%d",&x,&y,&z);

 temp=x*100+y*10+z;

 for(i=9;i>0;i--)
 {
  for(j=9;j>=0;j--)
  {
   temp1=temp*10+j;
   temp1=i*10000+temp1;
   if(temp1%n==0)
   {
    ans1=i,ans2=j,price=temp1/n;
    break;
   }
  }
  if(j!=-1)
    break;
 }

 if(i==0)
 printf("0\n");
 else
 printf("%d %d %d\n",ans1,ans2,price);
}

return 0;
}
