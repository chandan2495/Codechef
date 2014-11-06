#include<stdio.h>

int count,n,count1;
int swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

void permute(int a[50],int i,int n,int d)
{
 if(i==n)
 {
     count1++;
     int k;
     printf("\n");
     for(k=0;k<=n;k++)
     {
         printf("%d ",a[k]);
         if(a[k]==d){
         if(k%2==0)
         {
             if(d>a[k+1])
                count++;
         }
         else{
            if(d>a[k-1])
            count++;
         }
        }
     }
 }
 else
 {
     int j;
  for(j=0;j<=n;j++){
  swap(&a[i],&a[j]);
  permute(a,i+1,n,d);
  swap(&a[i],&a[j]);
  }
 }
}

int main()
{
int i,a[50],d;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

scanf("%d",&d);
permute(a,0,n-1,d);
printf("count %d\n",count);
printf("\nCounts %d\n",count1);
return 0;
}
