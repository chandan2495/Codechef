#include<stdio.h>
#include<string.h>

int decode(char *s,int n)
{
if(n==0||n==1)
return 1;
int count=0;
if(s[n-1]>='0')
count=decode(s,n-1);
if((s[n-2]=='1')||(s[n-2]=='2'&&s[n-1]=='0'))
count+=decode(s,n-2);

return count;
}

int main()
{
int n;
char s[32];
scanf("%s",s);
n=strlen(s);
printf("%d\n",decode(s,n));
return 0;
}
