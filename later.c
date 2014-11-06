#include<stdio.h>
#include<limits.h>

int main()
{
int n,k,count,a[100100],i,j,min,max;

min=INT_MAX;
max=INT_MIN;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}

for(i=0;i<k;i++){
max=max-min;
min=0;
}

return 0;
}
