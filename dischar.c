#include<stdio.h>

int main()
{

int t,a[26]={0},i,len=0;
char s[100100];
scanf("%d\n",&t);
while(t--)
{

 scanf("%s",s);

 for(i=0;i<26;i++)
 a[i]=0;

 i=len=0;
 while(s[i])
 {
  if(a[s[i]-'a']==0)
  len++,a[s[i]-'a']++;

  i++;
 }

 printf("%d\n",len);
}
return 0;
}
