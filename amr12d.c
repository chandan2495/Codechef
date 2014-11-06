#include<stdio.h>
#include<string.h>

int main()
{
int t,i,n,j;
char s[15];

scanf("%d\n",&t);

while(t--)
{
scanf("%s",s);
n=strlen(s);
for(i=0,j=n-1;i<=j;i++,j--)
{
 if(s[i]!=s[j])
 break;
}
if(i>j)
 printf("YES\n");
else
printf("NO\n");
}

return 0;
}
