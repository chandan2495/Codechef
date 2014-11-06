#include<stdio.h>

int compare(char *a,char *b)
{
 return strcmp(a,b);
}

int main()
{
int n,i;
char s1[200][50];

scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%s",s1[i]);

qsort(s1,n,sizeof(s1[0]),compare);

for(i=0;i<(n-1);i++)
printf("%s\n",s1[i]);

printf("%s",s1[i]);
return 0;
}
