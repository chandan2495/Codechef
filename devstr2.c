#include<stdio.h>

int flip(char s[100010],int pos,int n,int k,int m)
{
 int i,j;
     for(i=0;i<n-1;i++)
     {
      s[pos+k]=49-s[pos+k]+'0';
      pos=pos+k+1;
     }
     if(m==0)
     s[pos+k-1]=49-s[pos+k-1]+'0';
     else
     s[pos+k]=49-s[pos+k]+'0';

}

int main()
{
int t,n,res=0,k,count1=0,count2=0,count=0,pos,i;
char s[100010],c;
scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&n,&k);
 scanf("%s",s);
 if(k==1)
 {
  res=0;count1=count2=0;
  for(i=0;i<n;i++)
  {
   if(i%2==0&&s[i]!='0')
   count1++;
   else if(i%2==0)
   count2++;
   if(i%2!=0&&s[i]!='1')
   count1++;
   else if(i%2!=0)
   count2++;
  }
  if(count1<count2)
  {
      res=count1;
      c='0';
      for(i=0;i<n;i++){
        s[i]=c;c=49-c+'0';
      }
  }
  else
  {
      res=count2;
      c='1';
      for(i=0;i<n;i++){
        s[i]=c;c=49-c+'0';
      }
  }
 }
 else{
 count=1; pos=0; res=0;
  for(i=1;i<n;i++)
  {
   if(s[i]!=s[i-1])
   {
    if(count>k)
    {
     flip(s,pos,count/(k+1),k,count%(k+1));
     res+=(count/(k+1))==0?1:count/(k+1);
    }
     count=1;
     pos=i;
   }
   else
    count++;
  }
  if(count>k){
    flip(s,pos,count/(k+1),k,count%(k+1));
    res+=(count/(k+1))==0?1:count/(k+1);
  }
 }
printf("%d\n%s\n",res,s);
}

return 0;
}
