#include<stdio.h>

char s1[1000010];

int main()
{
int d;
char s[1000];
scanf("%d",&d);
while(d--)
{
scanf("%s",s);
}

scanf("%[^\n]s",s1);

printf("%s",s1);

return 0;
}
