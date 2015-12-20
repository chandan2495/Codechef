#include<stdio.h>

int main()
{
char s[100010],s1[100010];
int i,j,flag=0;
while(scanf("%s",s)!=EOF)
{

 flag=i=j=0;
 for(i=0;s[i];)
 {
  if(s[i]=='_'){
  if(flag!=2&&i-1>=0&&s[i-1]>96&&s[i+1]!='\0'&&s[i+1]>96){
        flag=1;
  s1[j++]=s[i+1]-32;
  i+=2;
  }
  else
    break;
  }
  else if(s[i]<91&&s[i]>64)
  {
   if(flag!=1&&i!=0){
       flag=2;
   s1[j++]='_';
   s1[j++]=s[i]+32;
   i++;
   }
   else
    break;
  }
  else if(s[i]>96&&s[i]<123)
  {
   s1[j++]=s[i++];
  }
  else
    break;
 }
 if(s[i]!='\0')
    printf("Error!\n");
 else{
 s1[j]='\0';
 printf("%s\n",s1);
 }
}

return 0;
}
