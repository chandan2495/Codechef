#include<stdio.h>
#include<string.h>

int main()
{

int t,n,a[1000],d,res=0,i;

scanf("%d",&t);
while(t--)
{
 res=0;
 scanf("%d",&n);
 memset(a,0,sizeof(a));
 for(i=0;i<n;i++){
  scanf("%d",&d);
  a[d]++;
 }
 for(i=0;i<101;i++)
  if(a[i]>0)
   res++;

   printf("%d\n",res);
}

return 0;
}
