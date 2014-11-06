#include<stdio.h>

int reverse(char *s,int start,int end)
{
 int i,j;
 char temp;
 for(i=start,j=end;i<=j;i++,j--)
 {
  temp=s[i];
  s[i]=s[j];
  s[j]=temp;
 }
}

int reversewordbyword(char *s)
{
 int n=strlen(s),start,end,i;
 reverse(s,0,n-1);
 start=end=-1;
 for(i=0;s[i];i++)
 {
  if(start!=-1&&(s[i]==' '||s[i]=='\t'))
  {
   end=i-1;
   reverse(s,start,end);
   //printf("%s\n",s);
   start=end=-1;
  }
  else if(s[i]!=' '&&s[i]!='\t')
  {
   if(start==-1)
   start=i;
  }
 }

 if(start!=-1)
 {
  end=i-1;
  reverse(s,start,end);
 }

}

int main()
{
 char s[100];
 gets(s);

 reversewordbyword(s);
 printf("%s\n",s);

return 0;
}
