#include<stdio.h>
#include<string.h>
int n;
int rec(char *s,int i)
{
 if(i==n-1||i==n-2)
 return 0;
 else
 {
 int a=rec(s,i+1);
 int temp=s[i]-'0';
 if(temp>0)
 temp=temp*10+s[i+1]-'0';
 if(temp>0){
 return a+1;
 }
 }
}

int main()
{
char s[23];
scanf("%s",s);
n=strlen(s);
printf("%d\n",rec(s,0)+1);
return 0;
}
