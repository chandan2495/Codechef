#include<stdio.h>
#include<string.h>
#include<math.h>

typedef unsigned long long ll;
int main()
{
int t,res,a[]={1,1,4,4,2,1,1,4,4,2},n,l;
ll b;
char s[10010];
scanf("%d",&t);
while(t--)
{
 scanf("%s%llu",s,&b);
 l=s[strlen(s)-1]-'0';
 n=a[l];

 if(b==0)
 res=1;
 else{
  if(b%n==0)
  res=((int)pow(l,n))%10;
  else
  res=((int)pow(l,b%n))%10;
 }

 printf("%d\n",res);
}
return 0;
}
