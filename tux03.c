#include<stdio.h>
#include<limits.h>
int compare(int *a,int *b)
{
return *a-*b;
}

int main()
{
int t,a[20],min,n=10,i,diff,index,j=1;

scanf("%d",&t);
while(t--)
{
    j=1;
n=10;
min=INT_MAX;
index=0;
while(j<=n){
 for(i=0;i<15;i++)
 scanf("%d",&a[i]);

 qsort(a,15,sizeof(int),compare);

 diff=a[14]-a[0];
 if(min>=diff){
 min=diff;
 index=j;
 }
j++;
}
printf("%d %d\n",index,min);
}
return 0;
}
