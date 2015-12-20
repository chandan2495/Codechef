#include<stdio.h>
int main()
{
int t,a,b,c,i=1;
scanf("%d",&t);
while(t--)
{
 scanf("%d%d%d",&a,&b,&c);
 printf("Case %d:%d\n",i,a>b?b>c?b:c>a?a:c:b>c?a>c?a:c:b);
 i++;
}
return 0;
}
