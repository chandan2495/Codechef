#include<stdio.h>
#include<string.h>

int n;
int swap(char *s1,char *s2)
{
 char temp;
 temp=*s1;
 *s1=*s2;
 *s2=temp;
}

int permute(char *s,int i)
{
 int j;
 if(i==n)
 printf("%s\n",s);
 else
 {
  for(j=i;j<n;j++)
  {
   swap(&s[i],&s[j]);
   permute(s,i+1);
   swap(&s[i],&s[j]);
  }
 }
}

int main()
{
char s[100];
scanf("%s",s);
n=strlen(s);
permute(s,0);

return 0;
}
