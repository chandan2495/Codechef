#include<stdio.h>
#include<string.h>

int main()
{
int t,countf,countr,min,i,n;
char s[100010],s1[100010];

scanf("%d",&t);
while(t--)
{
 scanf("%s",s);
 n=strlen(s);
 for(i=0;s[i];i++)
 {
  if(s[i]=='+')
  s[i]='0';
  else
  s[i]='1';

  s1[i]=s[i];
 }
 s1[i]='\0';
countf=countr=min=0;
 for(i=0;i<n-1;i++)
 {
  if(s[i]==s[i+1]){
  s[i+1]=!(s[i+1]-'0')+'0';
  countf++;
  }
 }

 for(i=n-1;i>0;i--)
 {
  if(s1[i]==s1[i-1]){
  s1[i-1]=!(s1[i-1]-'0')+'0';
  countr++;
  }
 }

 min=countf<countr?countf:countr;

 printf("%d\n",min);
}
return 0;
}
