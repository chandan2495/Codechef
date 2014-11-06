#include<stdio.h>

int n,a[10001],i,j,count=0,b[10001][2];
int reverse(int i,int j)
{
int k,l,temp;
 for(k=i,l=j;k<l;k++,l--)
 {
 temp=a[k];
 a[k]=a[l];
 a[l]=temp;
 }
}

int main()
{
int k,l,pos;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
k=0;
for(i=0;i<n-1;i++)
{
 pos=i;
 for(j=i+1;j<n;j++)
 {
  if(a[pos]>a[j])
  pos=j;
 }
 if(pos!=i)
 {
  reverse(i,pos);
  count++;
  b[k][0]=i+1;
  b[k][1]=pos+1;
  k++;
 }
}

printf("%d\n",count);
for(i=0;i<k;i++)
printf("%d %d\n",b[i][0],b[i][1]);
return 0;
}
