#include<stdio.h>

int compare(int *a,int *b)
{
return *a-*b;
}
int t,n,m,a[50],i,j;
int issubset(int i,int sum)
{
 if(sum==0)
 return 1;
 else if(i==n||a[i]>sum)
 return 0;
 else
 return issubset(i+1,sum-a[i])||issubset(i+1,sum);
}

int main()
{
scanf("%d",&t);

while(t--)
{
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 qsort(a,n,sizeof(int),compare);
 if(issubset(0,m))
 printf("Yes\n");
 else
 printf("No\n");
}
return 0;
}
