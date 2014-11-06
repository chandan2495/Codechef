#include<stdio.h>
#include<string.h>

int main()
{
int a[26]={0},i,n,count=0;
char s[100100];

scanf("%s",s);
i=0;
while(s[i])  //calculate frequency of each character
{
 a[s[i]-'a']++;
 i++;
}
n=strlen(s);

for(i=0;i<26;i++)
{
 if(a[i]%2!=0) //count characters with odd occurence
 count++;
}

if(count>1) //if odd count characters are greater than string can't be a pallidrome
printf("NO\n");
else if(count==1&&n%2==0) //if one odd character then we can't have an even length pallindrome
printf("NO\n");
else
printf("YES\n");

return 0;
}
