#include<stdio.h>
#include<string.h>
int main()
{
int k,a[26]={0},i,j=0,count=0,pos[200],l,n;
char s[200];

scanf("%d",&k);
scanf("%s",s);
n=strlen(s);
if(k==1)
printf("YES\n%s\n",s);
else if(n<k)
    printf("NO\n");
else{
a[s[0]-'a']++;
count=1;
for(i=1;s[i];i++)
{
  if(a[s[i]-'a']==0)
  {
   pos[j++]=i;
   a[s[i]-'a']++;
   count++;
  }
  if(count==k)
  break;
}
l=0;
if(s[i]=='\0')
    printf("NO\n");
else{
printf("YES\n");
for(i=0;i<j;i++)
{
 for(;l<pos[i];l++)
 printf("%c",s[l]);

 printf("\n");
}
for(i=l;s[i];i++)
    printf("%c",s[i]);
printf("\n");
}
}
return 0;
}
