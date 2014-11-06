#include<stdio.h>
#include<string.h>

int main()
{
int t,a[256]={0},b[256]={0},c,count=0,i;
char s1[10001],s2[10001];
scanf("%d\n",&t);
while(t--)
{
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
scanf("%s",s1);
scanf("%s",s2);
i=0;
while(s1[i])
{

a[s1[i]]++;
i++;
}
i=0;
while(s2[i])
{
b[s2[i]]++;
i++;
}

count=0;
for(i=1;i<256;i++)
{
 if(a[i]!=0&&b[i]!=0){
 count+=a[i]<b[i]?a[i]:b[i];
 }
}
printf("%d\n",count);
}
return 0;
}
