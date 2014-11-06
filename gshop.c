#include<stdio.h>

int compare(int *a,int *b)
{
 return *a-*b;
}

int main()
{
int t,n,k,a[500],i,flag=0;
long long sum=0;
scanf("%d",&t);
while(t--)
{
    sum=0; flag=0;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 qsort(a,n,sizeof(int),compare);
 for(i=0;i<n;i++)
 {
  if(k>0){
    if(a[i]<0){
    a[i]=a[i]*-1;
    sum+=a[i];
    }
    else
    {   i--;
        if(a[i]>a[i+1])
        i++;
        a[i]=a[i]*-1;

        sum+=a[i];
        i--;
        flag=1;
    }
  k--;
  if(k==0&&flag==1)
    i++;
  }
    else
    sum+=a[i];
 }
 printf("%lld\n",sum);
}
return 0;
}
