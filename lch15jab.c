#include<stdio.h>

int main()
{
int t,a[26]={0},i,j,sum,n;
char s[100];
scanf("%d",&t);
while(t--)
{
 for(i=0;i<26;i++)
    a[i]=0;

 scanf("%s",s);
 for(i=0;s[i];i++)
 a[s[i]-'a']++;

 n=i;
 for(i=0;i<26;i++)
 if(a[i]>0&&a[i]==n-a[i])
 break;
 if(i!=26)
 printf("YES\n");
 else
 printf("NO\n");
}
return 0;
}
