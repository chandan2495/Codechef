#include<stdio.h>

int main()
{
int t,a,b,c,i,flag=0,in=0,dc=0,cas=1,temp;
scanf("%d",&t);
while(t--)
{
scanf("%d%d%d",&a,&b,&c);
i=0;
flag=0;
in=dc=0;
while(1)
{
temp=(c-i*a);
 if((temp%b)==0){
 flag=1;break;
 }
 if(dc==0&&temp/b>0)
 in=1,i++;
 else if(dc==1){
 flag=0;break;}
 if(in==0&&temp/b>0)
 dc=1,i--;
 else if(in==1){
 flag=0;break;}
}

if(flag==1)
printf("Case %d: Yes\n",cas);
else
printf("Case %d: No\n",cas);

cas++;

}

return 0;
}
