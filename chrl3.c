#include<stdio.h>
#include<malloc.h>

int findmin(int a[],int n)
{

    int i,min=1000000,mini=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0&&a[i]<min)
        {
            min=a[i];
            mini=i;
        }
    }
    return mini;
}

int main()
{
 int n,*a,count=0,i,prev,j;
 scanf("%d",&n);
 a=malloc(sizeof(int)*n);

 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 while(1)
 {
 i=0;
  i=findmin(a,n);
  if(i==-1)
    break;
  prev=a[i];
  a[i]=0;
  for(j=i+1;j<n;j++)
  {
   if(prev<=a[j])
   {
    a[j]=0;
    prev=a[j];
   }
  }
  count++;
  for(i=0;i<n;i++)
  {
   if(a[i]!=0)
   break;
  }
  if(i==n)
  break;
 }
 printf("%d\n",count);
 return 0;
}
