#include<stdio.h>

int main()
{
int n,res=0,i,count=0,temp;
scanf("%d",&n);
if(n<4)
printf("%d\n",n);
else
{
res=3; count=0;
 for(i=4;i<=n;i++)
 {
  if(i%2==0)
  { temp=i/2;
      if(temp%2==0)
      count++;
    res+=count;
  }
  res++;
 }
 printf("%d\n",res);
}
return 0;
}

