#include<stdio.h>

int digitsum(int n)
{
 int sum=0;
 while(n)
 {
  sum+=n%10;
  n/=10;
 }
 return sum;
}

int main()
{
int t,n,i,n1,temp,min;

 scanf("%d",&t);
 while(t--)
 {
  min=10000100;
  scanf("%d",&n);
  n1=n;
  n1--;
  for(i=0;i<55;i++)
  {
   temp=n1+digitsum(n1);
   if(temp==n)
   {
    if(n1<min)
    min=n1;
   }
   n1--;
  }
  if(min!=10000100)
  printf("%d\n",min);
  else
  printf("NONE\n");
 }

 return 0;
}
