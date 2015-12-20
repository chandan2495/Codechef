#include<stdio.h>

typedef long long ll;

int compare(int *a,int *b)
{
return *a-*b;
}

int main()
{
int t,n,a[30],i,j,k,f,count=0,po,count1=0;
ll sum=0,p,temp=0;
scanf("%d",&t);
while(t--)
{
    sum=0; count=0;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 sum+=a[i];
 }

 if(sum%k==0)
 {
     p=sum/k;
     po=(1<<n);
for(i=0;i<po;i++)
{
temp=0; count1=0;
 for(j=0;j<n;j++)
 {
  if((i>>j)&1){
        //printf("%d ",a[j]);
  temp=temp+a[j];
  count1++;
  }
 }
 if(temp==p&&(n-count1)>=(k-1)){
  //printf("ooo");
    count++;
 }
 //printf("\n");
}
if(count>=k)
    printf("yes\n");
else
    printf("no\n");
 }
 else
 {
 printf("no\n");
 }
}

return 0;
}
