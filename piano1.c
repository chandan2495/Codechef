#include<stdio.h>

int main()
{
int t,n,i,count,j,temp;
char s[200];

scanf("%d",&t);
while(t--)
{
 count=0; j=0;
 scanf("%s%d",s,&n);
 n=n*12;
 for(i=0;s[i];i++)
 {
  if(s[i]=='T')
  j+=2;
  else
  j+=1;
 }
 count=n-j;
 temp=n;
 for(i=0;i<=temp;i++)
 {
  //printf("%d %d\n",temp,i);
  if(((temp-i-1)/j)>1)
  count+=((temp-i-1)/j)-1;
  else
  break;
 }
 printf("%d\n",count);
}

return 0;
}
