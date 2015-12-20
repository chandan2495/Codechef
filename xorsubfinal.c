#include<stdio.h>

int compare(int *a,int *b)
{
    return *b-*a;
}

int main()
{
int t,k,a[2000],i,j,res,n,temp,max=0;
scanf("%d",&t);

while(t--)
{
 scanf("%d%d",&n,&k);
max=0;
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 max=k;
 qsort(a,n,sizeof(int),compare);

 for(i=0;i<n;i++)
 {   //printf("%d\n",a[i]);
     max=max<(max^a[i])?(max^a[i]):max;
 }
 printf("%d\n",max);

}

return 0;
}
