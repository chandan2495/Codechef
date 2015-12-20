#include<stdio.h>
#include<string.h>

int main()
{
int t,count,i,n;
char s[100010];
scanf("%d",&t);
while(t--)
{
count=0;
 scanf("%s",s);
 n=strlen(s);
 for(i=0;i<n-1;i++)
 {
  if(s[i]=='+')
  {
   if(s[i+1]=='+')
   {
    if(i+2<n&&s[i+2]=='+')
    s[i+1]='-';
    else
    s[i]=
   }
  }
 }
}
return 0;
}
