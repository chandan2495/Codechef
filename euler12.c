#include<stdio.h>

int a[1000010]={0},pr[100000];
int main()
{
int i,j,n,sum,count=0,pro,temp;
a[0]=a[1]=1;
for(i=2;i*i<=1000000;i++)
{
    if(a[i]==0)
    {
        for(j=i*i;j<=1000000;j+=i)
        a[j]=1;
    }
}
j=0;
for(i=2;i<=1000000;i++)
    if(a[i]==0)
        pr[j++]=i;

n=6;
sum=21;
while(1)
{
pro=1;
for(i=0;i<j&&sum>=(pr[i]/2);i++)
{
    temp=sum;
    count=0;
    while(temp%pr[i]==0){
        temp=temp/pr[i];
        count++;
    }
    pro*=(count+1);
}
if(pro>500)
break;
n++;
sum+=n;
}
printf("%d\n",sum);
return 0;
}
