#include<stdio.h>

int main()
{
int n,a[100100],i,h[100010]={0},res=0,mis[100100],j,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
h[a[i]]++;
if(h[a[i]]>1||a[i]>n)
flag=1;
}
j=0;
if(flag==1)
{
for(i=1;i<=n;i++)
{
    if(h[i]==0)
        mis[j++]=i;
}
j=0;
for(i=0;i<n;i++)
{
    if(h[a[i]]>1){
        h[a[i]]--;a[i]=mis[j++];
    }
    if(a[i]>n)
        a[i]=mis[j++];
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
