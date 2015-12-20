#include<stdio.h>
#include<string.h>

int main()
{
int t,n,k,i,j,count=0,a[100010],forwardCount,backwardCount,min,randomCount=0;
char s[100110],s1[100110],s2[100110];
scanf("%d",&t);
while(t--)
{
 scanf("%d%d",&n,&k);
 scanf("%s",s);
 strcpy(s1,s);
 strcpy(s2,s);
 a[0]=1;
 i=1;
  forwardCount=0;
  count=1;
  for(i=1;i<n;i++)
  {
      if(s1[i]==s1[i-1])
      count++;
      else
      count=1;
        if(count>k)
        {
        s1[i]=(s1[i]=='0'?'1':'0');
        forwardCount++;
        count=1;
      }
  }
  backwardCount=0;
  count=1;
  for(i=n-2;i>=0;i--)
  {
      if(s2[i]==s2[i+1])
      count++;
      else
      count=1;
        if(count>k)
        {
        s2[i]=(s2[i]=='0'?'1':'0');
        backwardCount++;
        count=1;
        }
  }


 if(k>1){
        randomCount=0;
 for(i=1;s[i];i++)
 {
  a[i]=1;
  if(s[i]==s[i-1])
    a[i]=a[i-1]+1;
 }
count=0;
 for(j=i-1;j>=0;)
 {
    //printf("%d %d\n",j,a[j]);
    if(a[j]>k)
    {
      s[j-k+1]=(s[j-k+1]=='0'?'1':'0');
      j=j-k;
      count++;
    }
    else
    {
        j=j-a[j];
    }
 }
 }
 if(forwardCount<backwardCount)
 {
     if(randomCount==0||forwardCount<randomCount)
     {
         min=forwardCount;
         strcpy(s,s1);
     }
     else{
        min=randomCount;
     }
 }
 else{
    if(randomCount==0||backwardCount<randomCount)
     {
         min=backwardCount;
         strcpy(s,s2);
     }
     else{
        min=randomCount;
     }
 }

 printf("%d\n%s\n",min,s);
}
return 0;
}
