#include<stdio.h>

typedef unsigned long long ll;
int main(){

int n1=1,n2=2,temp;
ll sum=2;

for(;n2<=4000000;)
{
 temp=n1+n2;
 if(temp%2==0)
 sum+=temp;
 n1=n2;
 n2=temp;
}
printf("%llu\n",sum);
return 0;
}
