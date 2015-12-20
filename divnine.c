#include<stdio.h>
char n[1000010];
int main()
{
int t,sum,res,i,ans,flag,temp;

scanf("%d",&t);
while(t--)
{
 scanf("%s",n);
 i=0;sum=0;ans=0;
 while(n[i]){
 sum+=(n[i]-'0');
 i++;
 }
 if(i==1){
  if(sum<(9-sum))
  ans=sum;
  else
  ans=(9-sum);
 }else{
 res=sum%9;
 if(res>0){
        flag=0;
  if(res<(9-res)){
  ans=res;
  temp=ans;
  for(i=0;n[i];i++)
  {
      if(i==0)
        temp-=(n[i]-'0')-1;
      else
        temp-=(n[i]-'0');
      if(temp<=0)
        break;
  }
  if(n[i]!='\0')
    flag=1;
  else{
    flag=0;ans=(9-ans);}
  }
  else{
  ans=(9-res);
  temp=ans;
  for(i=0;n[i];i++)
  {
    temp-=(9-(n[i]-'0'));
      if(temp<=0)
        break;
  }
  if(n[i]!='\0')
    flag=1;
  else{
    flag=0;ans=(9-ans);}
  }
 }
 }
 printf("%d\n",ans);
}

return 0;
}
