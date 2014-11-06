#include<stdio.h>

int b[1001][1001];
int main()
{
int n,a[1001],i,j,count=0,flag[1001]={0};
int k,l,temp,temp1;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
j=0;
for(i=0;i<n;i++)
{
if(flag[i]==0){
k=1;
temp=i+1;
flag[i]=1;
b[j][k++]=i+1;
temp1=a[i];
flag[temp1-1]=1;
 while(temp1!=temp)
 {
  b[j][k++]=temp1;
  temp1=a[temp1-1];
  flag[temp1-1]=1;
 }
count++;
b[j][0]=k;
j++;
}
}
printf("%d\n",count);
for(i=0;i<j;i++)
{
    for(l=1;l<b[i][0];l++)
    printf("%d ",b[i][l]);
    printf("%d\n",b[i][1]);
}

return 0;
}
