#include<stdio.h>

int sumdigit(int n)
{
int sum=0,temp;
while(n>0)
{
 temp=n%10;
 sum+=temp*temp;
 n/=10;
}
return sum;
}

int check(int n)
{
int one=0;
 while(n>0)
 {
  if(n%10!=0&&n%10!=1)
  return 0;
  if(n%10==1)
  one++;
  n/=10;
 }
 if(one==1)
 return 1;
 else
    return 0;
}

int main()
{
int n,sum,h[1000]={0},count=0,flag;

scanf("%d",&n);

sum=n;
flag=0;
while(1)
{
    //printf("%d\n",sum);
if(sum%10==0&&check(sum))
break;
count++;
sum=sumdigit(sum);
if(h[sum]==0)
h[sum]=1;
else {
flag=1;
break;
}
}
if(flag==0)
printf("%d\n",count+1);
else
printf("-1\n");
return 0;
}
