#include<stdio.h>

int main()
{
int count=1;
char s[120];
scanf("%s",s);
while(s[0]!='*')
{
 if(s[0]=='H')
  printf("Case %d: Hajj-e-Akbar\n",count);
 else
  printf("Case %d: Hajj-e-Asghar\n",count);
  count++;
  scanf("%s",s);
}
return 0;

}
