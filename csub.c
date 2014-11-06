#include<stdio.h>

typedef long long ll;
int main()
{
int t,n,i;
char s[100001];
ll sum=0,count=0;

scanf("%d",&t);
while(t--)
{
count=0;
 scanf("%d\n",&n);
 scanf("%s",s);
 i=0;
 while(s[i])
 {
  if(s[i]=='1')
  count++;
  i++;
 }
 sum=(1+count)*count;
 sum=sum/2;
 if(count!=1)
 printf("%lld\n",sum);
 else
    printf("1\n");
}

return 0;
}
