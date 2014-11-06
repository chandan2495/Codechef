#include<stdio.h>

int main()
{
int count,i,flip,game=1;
char s[100010];

while(scanf("%s",s)!=EOF)
{
 count=0;
 i=0; flip=0;
 while(s[i])
 {
  s[i]=flip?(s[i]-'0'?'0':'1'):s[i];

  if(s[i]=='1'){
  flip=flip?0:1;
  count++;
  }
  i++;
 }
 printf("Game #%d: %d\n",game,count);
 game++;
}

return 0;
}
