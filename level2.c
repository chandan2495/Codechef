#include<stdio.h>

int main()
{
char s[500];
int i;

scanf("%[^\n]s",s);
i=0;
while(s[i])
{
 printf("%c",s[i]+2);
 i++;
}
}
