#include<stdio.h>
#include<string.h>

int max(int a,int b)
{
    return a>b?a:b;
}

int main()
{
int i=0,j,count=0,k=0,h,e,f;
char s[100001];
scanf("%s",s);
h=0, e=0, f=0;
for(j=0;s[j];j++)
 {
  if(s[j]=='C'){
        h=max(h,j+1);
  while(s[h]&&s[h]!='H')
    h++;
  if(s[h]=='\0')
    break;
        e=max(e,h+1);
  while(s[e]&&s[e]!='E')
    e++;
   if(s[e]=='\0')
    break;
        f=max(f,e+1);
  while(s[f]&&s[f]!='F')
    f++;
   if(s[f]=='\0')
    break;
    h++ , e++, f++;
    count++;
  }
}
printf("%d\n",count);
return 0;
}
