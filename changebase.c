#include<stdio.h>
#include<string.h>
#include<math.h>

int changebase(char n[50],int base)
{
 int i,res=0,j=0;
 for(i=strlen(n)-1;i>=0;i--,j++)
 {
  res+=(n[i]>'9'?n[i]-'a'+10:n[i]-'0')*pow(base,j);
 }
 return res;
}

int main()
{
int t,x,y,res;
char input[100],n[20];
scanf("%d",&t);
while(t--)
{
 sscanf(gets(input),"%s %d %d",n,x,y);

 res=changebase(n,x);
 sprintf(n,"%d",res);
 res=changebase(n,y);
}

return 0;
}
