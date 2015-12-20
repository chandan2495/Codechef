#include<stdio.h>
#include<string.h>

int checkpallin(char *s,int i,int j)
{
int k,l;
for(k=i,l=j;k<=l;k++,l--)
{
 if(s[k]!=s[l])
 break;
}
 if(k>l)
 return 1;
 else
 return 0;
}

int main()
{

int t,i,j;
char s[100100];
scanf("%d\n",&t);
while(t--)
{

 scanf("%s",s);
 for(i=0,j=strlen(s)-1;i<=j;i++,j--)
 {
  if(s[i]!=s[j])
  break;
 }
 if(i>j)
 printf("YES\n");
 else
 {
  if(checkpallin(s,i,j-1)||checkpallin(s,i+1,j))
  printf("YES\n");
  else
  printf("NO\n");
 }
}

return 0;
}
