#include<stdio.h>

int a[10000],n;
int reverse(int i,int j)
{
int k,l,temp;
 for(k=i,l=j;k<=(j/2);k++,l--)
 {
 temp=a[k];
 a[k]=a[l];
 a[l]=temp;
 }
}

int main()
{
int i;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
reverse(0,n-1);
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
