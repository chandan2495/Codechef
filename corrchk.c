#include<stdio.h>

int getval(char a[],int base)
{
    int res=0,temp=1,i=0;
    while(a[i])
    {
        if(a[i<97])
        res=res*base+(a[i]-'0');
        else
            res=res*base+(a[i]-'a'+10);
        i++;
    }
    return res;
}


int main()
{
int t,a,b,c,count=0,s,*temp,j,i,a1,b1,c1;
char s1[10],s2[10],s3[10],*temp1;
scanf("%d\n",&t);
while(t--)
{
a=0,b=0,c=0;
temp=&a;
temp1=s1;
count=0;i=0;
 while((s=getchar())!='\n')
 {
  if(s=='+')
  {
      temp1=s2;
      i=0;
  }
  else if(s=='=')
  {
  temp1=s3;
  i=0;
  }
  else
  temp1[i++]=s;
 }
for(i=2;i<17;i++){
a1=getval(s1,i);
b1=getval(s2,i);
c1=getval(s3,i);
if(a1+b1==c1){
count++;break;
}
}
}
printf("%d\n",count);
return 0;
}
