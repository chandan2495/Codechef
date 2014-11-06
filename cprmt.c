#include<stdio.h>

int main()
{
int a[26],b[26],min,i;
char s1[2000],s2[2000];

while(scanf("%s%s",s1,s2)!=EOF)
{
for(i=0;i<26;i++)
a[i]=b[i]=0;

for(i=0;s1[i];i++)
a[s1[i]-'a']++;

for(i=0;s2[i];i++)
b[s2[i]-'a']++;

for(i=0;i<26;i++)
{
 if(a[i]!=0&&b[i]!=0)
 {
  min=a[i]>b[i]?b[i]:a[i];
  while(min--)
  printf("%c",i+'a');
 }
}
printf("\n");
}
return 0;
}
