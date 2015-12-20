#include<stdio.h>

int compare(int *a,int *b)
{
    return *b-*a;
}

int main()
{
int t,n,a[10100],i,j,sum=0;

scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

qsort(a,n,sizeof(int),compare);

for(i=0;i<n;)
{
 sum+=a[i]+((i+1)<n?a[i+1]:0);
 //if((i+3)>=n){
 //sum+=((i+2)<n?a[i+2]:0);
 //i=i+4;
 //}
 i=i+4;
}

printf("%d\n",sum);
}

return 0;
}
