#include<stdio.h>

int a[300100];

int compare(int *a,int *b)
{
return *b-*a;
}


int main()
{
int n,i,max=0;

scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);

for(i=0;i<n-1;i++)
max=max<(a[i]&a[i+1])?(a[i]&a[i+1]):max;

printf("%d\n",max);

return 0;
}
