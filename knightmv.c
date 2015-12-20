#include<stdio.h>
#include<math.h>

int main()
{
 int t,i,j;
 char s[100];
 sscanf(gets(s),"%d",&t);
 while(t--)
 {
  gets(s);
  if(strlen(s)==5&&s[2]=='-'&&s[0]>='a'&&s[0]<='h'&&s[1]>='1'&&s[1]<='8'&&s[3]>='a'&&s[3]<='h'&&s[4]>='1'&&s[4]<='8')
  {
   if((abs(s[0]-s[3])==1&&abs(s[1]-s[4])==2)||(abs(s[0]-s[3])==2&&abs(s[1]-s[4])==1))
   printf("Yes\n");
   else
   printf("No\n");
  }
  else
    printf("Error\n");
 }
 return 0;
}
