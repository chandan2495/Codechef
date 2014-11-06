#include<stdio.h>

int found(int a[],int n,int k)
{
 int low,high=n,mid;
 low=1;
 if(n%2==0)
    high=n-1;
 while(low<=high)
 {
     mid=(low+high)/2;
     //printf("%d %d %d\n",low,high,mid);
     if(mid%2==0)
        mid--;
     if(a[mid]==k)
        return mid;
     else if(a[mid]>k)
      high=mid-2;
     else
        low=mid+2;
 }
 low=2,high=n;
 if(n%2!=0)
    high=n-1;
 while(low<=high)
 {
     mid=(low+high)/2;
     //printf("%d %d %d\n",low,high,mid);
     if(mid%2!=0)
        mid--;
     if(a[mid]==k)
        return mid;
     else if(a[mid]>k)
      high=mid-2;
     else
        low=mid+2;
 }
 return 0;
}

int main()
{
int n,a[100010],i,k,loc=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);

if((loc=found(a,n,k)))
printf("found at position %d\n",loc);
else
printf("Not found\n");

return 0;
}
