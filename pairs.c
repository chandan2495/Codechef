#include<stdio.h>

int compare(int *a,int *b)
{
return *a-*b;
}

int main()
{
int n,k,a[100010],i,count=0,low,high,mid;
int diff;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);

for(i=n-1;i>=0;i--)
{
 diff=k>a[i]?k-a[i]:a[i]-k;
 low=0,high=i-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(a[mid]==diff)
  break;
  else if(a[mid]>diff)
  high=mid-1;
  else
  low=mid+1;
 }
 if(low<=high)
 count++;
}
printf("%d\n",count);
return 0;
}
