#include<stdio.h>

int main()
{
int t,n;
char a,b,c;
scanf("%d",&t);
while(t--)
{
a=b=c='y';

 scanf("%d",&n);

 if(360<n)
 a=b=c='n';
 else {
 if(360%n!=0)
  a='n';
 if(n>26)
 c='n';
 }

 printf("%c %c %c\n",a,b,c);
}

return 0;
}
