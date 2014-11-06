#include<stdio.h>

int bitcount(int n)
{
int count=0;
 while(n)
 {
 n=n&(n-1);
 count++;
 }
 return count;
}

int main()
{
int t,n,count[1000]={0},i;

scanf("%d",&t);
for(i=1;i<1001;i++)
{
count[i]+=count[i-1]+bitcount(i);
}
while(t--)
{
scanf("%d",&n);
printf("%d\n",count[n]);
}
return 0;
}
