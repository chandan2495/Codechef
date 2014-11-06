#include<stdio.h>
#include<string.h>

int main()
{
int t;
char s1[1000],s2[1000],s3[2000];

scanf("%d\n",&t);
while(t--)
{
memset(s3,'\0',sizeof(s3));
 scanf("%s",s1);
 scanf("%s",s2);
 strcat(s3,s1);
 strcat(s3,s1);

 if(strstr(s3,s2))
 printf("YES\n");
 else
 printf("NO\n");
}
return 0;
}
