#include<stdio.h>
#include<string.h>

int ispallin(char *s)
{
 int i,j;
 for(i=0,j=strlen(s)-1;i<=j;i++,j--)
 {
    if(s[i]!=s[j])
    break;
 }
 if(i>j)
 return 1;
 else
 return 0;
}

int main()
{
int t;
char s[100100];
scanf("%d",&t);
while(t--)
{
 scanf("%s",s);

 if(ispallin(s))
 printf("1\n");
 else
 printf("2\n");
}

return 0;
}
