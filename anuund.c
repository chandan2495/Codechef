#include<stdio.h>

int compare(int *a,int *b)
{
 return *a-*b;
}
int main()
{
int t,n,a[100010],i,k,j;

scanf("%d",&t);

while(t--)
{
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 qsort(a,n,sizeof(int),compare);

 for(i=0,j=n-1,k=0;k<=j;i++)
 {
  if(i%2==0){
  printf("%d ",a[k]); k++;}
  else{
   printf("%d ",a[j]); j--;}
 }
 printf("\n");
}
return 0;

}
