#include<stdio.h>


int a[1000001],c[50001];
int compare(int *a,int *b)
{

    return *a-*b;
}
int main()
{
int n1,n2,n3,n,i,count=0,b,j=0;
scanf("%d%d%d",&n1,&n2,&n3);
n=n1+n2+n3;

for(i=0;i<n;i++)
{
scanf("%d",&b);
if(a[b]==1){
count++;
c[j++]=b;}
a[b]++;
}
printf("%d\n",count);
qsort(c,j,sizeof(int),compare);
 for(i=0;i<j;i++)
 printf("%d\n",c[i]);
return 0;
}
