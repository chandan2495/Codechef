#include<stdio.h>

int main()
{
int t,n,i,j,a[10],k,temp,flag=0,c;
char s[1000];

scanf("%d\n",&t);

while(t--)
{
 i=0;
 while((c=getchar())<33);
 while(c!='\n')
 {
   a[i++]=c-'0';
   c=getchar();
 }
 k=i;

 scanf("%s",s);
 flag=1; i=0; j=0;
 while(s[i])
 {
   if(j<0)
   flag=1,j++;
   if(j==k)
   flag=0,j--;
   temp=(s[i]-'a'-a[j])%26;
   //printf("%d\n",a[j]);
   if(temp<0)
    temp=temp+26;
   printf("%c",temp+'a');


   if(flag==0)
   j--;
   else
   j++;

   i++;
 }
 printf("\n");
}
//while(getch());
return 0;
}
