#include<stdio.h>

int main()
{
int t,l,len,i,j,count;
char s[10010];
scanf("%d",&t);
while(t--)
{
scanf("%d",&l);
scanf("%s",s);
len=strlen(s);
if(len==1)
printf("0\n");
else
{
i=1;count=0;
 while(s[i])
 {
  if(s[i]==s[i-1])
  {
  count++;
  i++;
  }
  i++;
 }
 printf("%d\n",count);
}
}
return 0;
}
