#include<stdio.h>

int main()
{
int t,n,k,l,i,j,a[1000],rem=0;

scanf("%d",&t);
while(t--)
{
 scanf("%d%d%d",&n,&k,&l);
 for(i=0;i<n;i++)
 a[i]=1;
 for(i=1;i<l;i++)
 {
    rem=1;
    for(j=n-1;j>=0;j--)
    {
     if(rem==1)
     {
      a[j]++;
      if(a[j]>k)
      rem=1,a[j]=1;
      else
      rem=0;
     }
     else
        break;
    }
 }
 for(i=0;i<n;i++)
 printf("%d ",a[i]);

 printf("\n");
}

return 0;
}
