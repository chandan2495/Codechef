#include<stdio.h>
#include<string.h>

int main()
{
int res,i,n;
char s[50];
scanf("%s",s);
n=strlen(s);
printf("%d\n",26*(n+1)-(n));
return 0;
}
