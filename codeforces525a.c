#include<stdio.h>

int main()
{
int n,k[26]={0},d[26]={0},ans=0,i;
char s[300010];
scanf("%d\n",&n);

scanf("%s",s);
i=0;
while(s[i])
{
 if(s[i]-32==s[i+1])
 i=i+2;
 else if(k[s[i+1]-'A']>0)
 {
  k[s[i+1]-'A']--;
  k[s[i]-'a']++;
  i=i+2;
 }
 else
 {
  ans++;
  k[s[i]-'a']++;
  i=i+2;
 }
}

printf("%d\n",ans);
return 0;
}
