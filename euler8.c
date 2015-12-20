#include<stdio.h>


int main()
{
int i,j;
unsigned long long max,pro=1;
char s[1010];

scanf("%s",s);

printf("%d\n",strlen(s));
max=pro;

for(i=0;i<988;i++)
{
 pro=1LL;
 for(j=i;j<i+13;j++)
 {
  pro*=(long long)(s[j]-'0');
 }
 //printf("%d\n",pro);
 max=max>pro?max:pro;
}

printf("%llu\n",max);

return 0;
}
