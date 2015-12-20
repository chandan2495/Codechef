#include<stdio.h>

typedef unsigned long long ull;
int main()
{
int t;
ull a,b,temp1,i,j,sum,sum1,sum2;
scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%llu%llu",&a,&b);

j=a;
sum1=sum2=0;
while(a<b&&a%10!=0){
    j=a; sum1=0;
while(j>0)
{
temp1=j%10;
if(temp1%2==0)
sum1=sum1+2*j;
else
sum1=sum1+j;
j=j/10;
}
sum=sum+(sum1%10);

a++;
}

while(a<b&&b%10!=0){
    j=b; sum1=0;
while(j>0)
{
temp1=j%10;
if(temp1%2==0)
sum1=sum1+2*j;
else
sum1=sum1+j;
j=j/10;
}
sum=sum+(sum1%10);
//printf("%d %d\n",a,b);
b--;
}

j=b; sum1=0;
while(j>0)
{
temp1=j%10;
if(temp1%2==0)
sum1=sum1+2*j;
else
sum1=sum1+j;
j=j/10;
}
sum=sum+(sum1%10);

if(b>=a)
sum+=((b-a)/10)*45;

printf("%llu\n",sum);
}
return 0;
}
