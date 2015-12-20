#include<stdio.h>

int main()
{
int c,n=0,flag=0;

while((c=getchar())!=EOF)
{
 if(c=='\n'){
  if(flag==1)
  n++,flag=0;
 printf("%d\n",n);
 n=0;
 }
 else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
 flag=1;
 else
 {
  if(flag==1)
  n++,flag=0;
 }
}
  if(flag==1)
  n++,flag=0;
 printf("%d",n);



return 0;
}
