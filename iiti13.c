#include<stdio.h>

int main()
{
int t,n,a[100100],i;
char s[100100],c;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
scanf("%s",s);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
 c=s[i];
 s[i]=s[a[i]-1];
 s[a[i]-1]=c;
}
printf("%s\n",s);
}
return 0;
}
