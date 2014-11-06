#include<stdio.h>

int pallin(char *s)
{
char *end,*start;
start=end=s;
while(*end)
end++;
end--;
while(start<end)
{
 if(*start!=*end)
 return 0;
 start++, end--;
}
return 1;
}

int main()
{
int t,c,i;
char str[100100];

scanf("%d",&t);
while(t--)
{
    c=0;
i=0;
while((c=getchar())<33);
str[i++]=c;
while((c=getchar())!='\n')
{
 if(c==str[i-1])
 continue;
 else
 str[i++]=c;
}
str[i]='\0';
if(pallin(str))
printf("YES\n");
else
printf("NO\n");
}
return 0;
}

