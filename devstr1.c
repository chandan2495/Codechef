#include<stdio.h>

int main()
{
int t,n,k,i,j,count=0,a[100010],flip;
char s[100110],s1[1000110];
scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&n,&k);
 scanf("%s",s);
 flip=k;
 count=flip;
 flip=-flip;
 for(i=0;i<n;i++)
 {
    if(count>0)
    s1[i]='1',count--;
    else
    s1[i]='0',count++;
    if(count==0)
        count=flip,flip=-flip;
 }
 printf("ss%s\n",s1);
 count=0;
 for(i=0;i<n;i++)
 {
     if(s[i]!=s1[i])
        count++;
 }
 printf("%d\n",count);
}
return 0;
}
